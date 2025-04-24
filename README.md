# Data Structures Implementation

This repository contains C++ implementations of fundamental data structures. Each implementation is template-based, allowing for use with any data type.

## Available Data Structures

### 1. Dynamic Array
A resizable array implementation with the following features:
- Dynamic resizing
- Insert/delete at any position
- Insert at beginning/end
- Search functionality
- Reverse array
- Clear array
- Auto-initialization of new elements

Key operations:
```cpp
- setItem(index, value)
- resize(newSize)
- getItemByIndex(index)
- reverse()
- find(value)
- insertAt(index, value)
- insertAtBeginning(value)
- insertAtEnd(value)
- deleteItemAtIndex(index)
- deleteFirstItem()
- deleteLastItem()
```

### 2. Doubly Linked List
A bi-directional linked list implementation with the following features:
- Forward and backward traversal
- Insert at beginning/end
- Insert after value/index
- Delete by value/position
- Search functionality
- Reverse list

Key operations:
```cpp
- InsertAtBeginning(value)
- InsertAtEnd(value)
- InsertAfter(value, insertedValue)
- InsertAfterIndex(index, insertedValue)
- DeleteNode(value)
- DeleteFirstNode()
- DeleteLastNode()
- Find(value)
- Reverse()
- Clear()
```

### 3. Queue
A FIFO (First-In-First-Out) data structure implementation with the following features:
- Push/pop operations
- Front/back access
- Insert at front/back
- Value modification
- Reverse queue

Key operations:
```cpp
- push(value)
- pop()
- front()
- back()
- insertAtFront(value)
- insertAtBack(value)
- reverse()
- clear()
```

### 4. Stack
A LIFO (Last-In-First-Out) data structure implementation with the following features:
- Push/pop operations
- Top element access
- Size tracking
- Clear functionality

Key operations:
```cpp
- push(value)
- pop()
- top()
- size()
- isEmpty()
- clear()
```

## Implementation Details

- All implementations are template-based for type flexibility
- Memory management is handled properly (no memory leaks)
- Error handling for edge cases
- Clean and maintainable code structure
- Each data structure is implemented in its own directory wiht some examples to demonstrate the functionality of the Data Structures


## Requirements
- C++ compiler with C++11 or later
- Standard Template Library (STL)