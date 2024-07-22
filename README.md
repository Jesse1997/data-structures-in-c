# Data Structures in C

Welcome to the Data Structures in C project! This repository contains implementations of various fundamental data structures in the C programming language. Each data structure includes basic operations with their corresponding time complexities.

## Data Structures Implemented

### 1. Arrays
Arrays are a collection of elements identified by index or key. They are stored in contiguous memory locations.

- **Operations:**
  - **Insert:** Only available in dynamic arrays
  - **Delete:** Only available in dynamic arrays
  - **Search:** O(n)
  - **Get Value at Index:** O(1)

### 2. Linked Lists
A linked list is a linear data structure where elements are not stored at contiguous memory locations. Each element points to the next, forming a chain.

- **Operations:**
  - **Insert:** O(1) (at the head), O(n) (in the middle or end)
  - **Delete:** O(1) (at the head), O(n) (in the middle or end)
  - **Search:** O(n)
  - **Get Value at Index:** O(n)

### 3. Stacks
A stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO (Last In First Out).

- **Operations:**
  - **Push:** O(1)
  - **Pop:** O(1)
  - **Search:** O(n)
  - **Get Value at Index:** Not typically applicable

### 4. Queues
A queue is a linear data structure which follows a particular order in which the operations are performed. The order is FIFO (First In First Out).

- **Operations:**
  - **Enqueue:** O(1)
  - **Dequeue:** O(1)
  - **Search:** O(n)
  - **Get Value at Index:** Not typically applicable

### 5. Trees
Trees are a hierarchical data structure consisting of nodes, with a root node and subtrees of children with a parent node, represented as a set of linked nodes.

- **Operations:**
  - **Insert:** O(log n) (for balanced trees), O(n) (for unbalanced trees)
  - **Delete:** O(log n) (for balanced trees), O(n) (for unbalanced trees)
  - **Search:** O(log n) (for balanced trees), O(n) (for unbalanced trees)
  - **Get Value at Index:** Not applicable

### 6. Graphs
Graphs are collections of nodes, called vertices, and the connections between them, called edges.

- **Operations:**
  - **Add Edge:** O(1)
  - **Remove Edge:** O(1)
  - **Search:** O(V + E) (using BFS or DFS)
  - **Get Value at Index:** Not applicable

## How to Use

Each data structure is implemented in its own C file with methods for the basic operations. The methods include comments explaining what each function should do. You can use these as starting points for further development or as educational tools to understand how each data structure works.

## Author
Jesse (SoftwareWolf)

## License
This project is licensed under the MIT License.
