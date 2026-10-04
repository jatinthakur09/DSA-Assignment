# Data Structures Assignment
## Stack Using Array & Circular Queue Using Array

---

## Student Details

| Field | Details |
|---|---|
| **Student Name** | Jatin Singh |
| **Course** | BCA |
| **Subject** | Data Structures |
| **Assignment Title** | Implementation of Stack and Circular Queue Using Arrays |

---

## 1. Objective

The objective of this assignment is to understand and implement fundamental linear data structures using arrays without using built-in stack or queue libraries.

This assignment covers:

- Implementation of a Stack using an array.
- Implementation of PUSH, POP, PEEK and DISPLAY operations.
- Handling Stack Overflow and Stack Underflow.
- Implementation of a Circular Queue using an array.
- Implementation of ENQUEUE, DEQUEUE, FRONT and DISPLAY operations.
- Correctly identifying full and empty queue conditions.
- Understanding time and space complexity.
- Comparing a Circular Queue with a simple Linear Queue.

---

## 2. Source Code Files

The project contains the following C source files:

```text
Jatin Singh/
│
├── stack_array.c
├── circular_queue.c
└── README.md
```

### `stack_array.c`

This program implements a Stack using an array with the following operations:

- `PUSH(x)` – Inserts an element into the stack.
- `POP()` – Removes the top element.
- `PEEK()` – Displays the top element without removing it.
- `DISPLAY()` – Displays all stack elements.
- Handles Stack Overflow and Stack Underflow.

### `circular_queue.c`

This program implements a Circular Queue using an array with:

- `ENQUEUE(x)` – Inserts an element into the queue.
- `DEQUEUE()` – Removes the front element.
- `FRONT()` – Displays the front element.
- `DISPLAY()` – Displays all queue elements.
- Correctly handles full and empty queue conditions.

---

## 3. Stack Using Array

A stack follows the **LIFO (Last In, First Out)** principle. The element inserted last is removed first.

### Operations

#### PUSH
Adds an element to the top of the stack.

#### POP
Removes the element from the top of the stack.

#### PEEK
Displays the top element without removing it.

#### DISPLAY
Displays the elements from top to bottom.

### Stack Overflow

When the stack is already full and the user tries to insert another element, **Stack Overflow** occurs. The new element is not inserted.

### Stack Underflow

When the stack is empty and the user tries to perform POP, **Stack Underflow** occurs.

---

## 4. Stack Output Example

```text
--- STACK USING ARRAY ---
1. PUSH
2. POP
3. PEEK
4. DISPLAY
5. EXIT
Enter your choice: 1
Enter value: 10
10 pushed into the stack.

Enter your choice: 1
Enter value: 20
20 pushed into the stack.

Enter your choice: 3
Top element: 20

Enter your choice: 4
Stack elements (top to bottom): 20 10

Enter your choice: 2
20 popped from the stack.
```

### Stack Overflow Example

```text
Enter your choice: 1
Enter value: 60
Stack Overflow! Cannot push 60.
```

---

## 5. Stack Time and Space Complexity

| Operation | Time Complexity | Auxiliary Space |
|---|---:|---:|
| PUSH | O(1) | O(1) |
| POP | O(1) | O(1) |
| PEEK | O(1) | O(1) |
| DISPLAY | O(n) | O(1) |

The complete stack requires **O(n)** storage for an array of capacity `n`.

---

## 6. Circular Queue Using Array

A Circular Queue is a queue in which the last position is connected back to the first position. It follows the **FIFO (First In, First Out)** principle.

The implementation uses modulo arithmetic to reuse available positions in the array.

### Operations

#### ENQUEUE
Adds an element at the rear of the queue.

#### DEQUEUE
Removes an element from the front of the queue.

#### FRONT
Displays the front element without removing it.

#### DISPLAY
Displays all elements currently present in the queue.

---

## 7. Circular Queue Output Example

```text
--- CIRCULAR QUEUE USING ARRAY ---
1. ENQUEUE
2. DEQUEUE
3. FRONT
4. DISPLAY
5. EXIT
Enter your choice: 1
Enter value: 10
10 enqueued into the queue.

Enter your choice: 1
Enter value: 20
20 enqueued into the queue.

Enter your choice: 3
Front element: 10

Enter your choice: 4
Queue elements: 10 20

Enter your choice: 2
10 dequeued from the queue.
```

### Queue Full Example

```text
Queue Overflow! Queue is full.
```

### Queue Empty Example

```text
Queue Underflow! Queue is empty.
```

---

## 8. Circular Queue Time and Space Complexity

| Operation | Time Complexity | Auxiliary Space |
|---|---:|---:|
| ENQUEUE | O(1) | O(1) |
| DEQUEUE | O(1) | O(1) |
| FRONT | O(1) | O(1) |
| DISPLAY | O(n) | O(1) |

The complete circular queue requires **O(n)** storage for an array of capacity `n`.

---

## 9. Circular Queue vs Linear Queue

### 1. Better Memory Utilization

A circular queue makes better use of memory because positions freed by DEQUEUE can be reused by later ENQUEUE operations.

In a simple linear queue, the rear moves only forward. Once the rear reaches the last index, insertion may fail even when unused positions are available at the beginning of the array.

### 2. ENQUEUE and DEQUEUE Complexity

Both `ENQUEUE` and `DEQUEUE` take:

```text
O(1)
```

Only the `front` or `rear` position needs to be updated.

### 3. Space Complexity

For an array of size `n`, the circular queue uses:

```text
O(n)
```

space.

### 4. Problem in a Linear Queue

Suppose a linear queue has capacity 5:

```text
[ _ ][ _ ][ 30 ][ 40 ][ 50 ]
  ↑
unused positions
```

Even though the first two positions are free, if `rear` has already reached the last index, a simple linear queue may report that it is full.

This results in inefficient memory utilization and is commonly described as a **false overflow** situation.

A circular queue solves this problem by wrapping the rear back to the beginning of the array.

---

## 10. How to Run in VS Code

Open the `Jatin Singh` folder in Visual Studio Code.

### Compile Stack

```bash
gcc stack_array.c -o stack
```

Run:

```bash
./stack
```

### Compile Circular Queue

```bash
gcc circular_queue.c -o circular_queue
```

Run:

```bash
./circular_queue
```

### Windows

```bash
gcc stack_array.c -o stack.exe
stack.exe

gcc circular_queue.c -o circular_queue.exe
circular_queue.exe
```

---

## 11. Conclusion

This assignment demonstrates the implementation of two important linear data structures using arrays.

The Stack implementation demonstrates LIFO operations along with Overflow and Underflow handling. The Circular Queue implementation demonstrates FIFO operations while efficiently reusing array positions.

Both implementations provide constant-time insertion and deletion operations, while DISPLAY operations require O(n) time.

The assignment also shows why a Circular Queue provides better memory utilization than a simple Linear Queue when array-based storage is used.

---

## Submitted By

**Jatin Singh**  
**BCA – Data Structures**
