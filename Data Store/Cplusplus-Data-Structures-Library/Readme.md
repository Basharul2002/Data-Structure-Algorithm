# mySTL Library

mySTL is a simple C++ library that provides templated classes for essential data structures. It includes implementations of Single Linked List, Double Linked List, Stack, Queue, and Binary Search Tree (BST).

## Contents

1. [SingleLinkedList Class](#singlelinkedlist-class)
2. [DoubleLinkedList Class](#doublelinkedlist-class)
3. [Stack Class](#stack-class)
4. [Queue Class](#queue-class)
5. [BST Class](#bst-class)
6. [Usage](#usage)

## SingleLinkedList Class

### Methods

- `insertAtLast`
- `insertAtFirst`
- `insertAtAnyPos`
- `insertBeforeElement`
- `deleteElementByValue`
- `deleteAtPos`
- `displayList`

## DoubleLinkedList Class

### Methods

- `insertAtLast`
- `insertAtFirst`
- `insertAtAnyPos`
- `insertBeforeElement`
- `deleteElement`
- `deletePos`
- `displayList`

## Stack Class

### Methods

- `push`
- `pop`
- `top`

## Queue Class

### Methods

- `enqueue`
- `dequeue`
- `front`
- `rear`

## BST Class

### Methods

- `insertIntoBST`
- `searchInBST`
- `displayInorder`
- `displayPreorder`
- `displayPostorder`

## Usage

To use the mySTL library, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/mySTL.git
    ```

2. Include the mySTL.h header file in your C++ code:

    ```cpp
    #include "mySTL.h"
    ```

3. Instantiate the desired class and use its methods:

    ```cpp
    int main() {
        // Example usage of SingleLinkedList
        SingleLinkedList<int> mySingleLinkedList;
        mySingleLinkedList.insertAtFirst(10);
        mySingleLinkedList.insertAtLast(20);
        mySingleLinkedList.displayList();

        // Similar usage for other classes
        // ...

        return 0;
    }
    ```

Feel free to explore the library and customize the usage according to your needs. If you encounter any issues or want to contribute, feel free to submit a pull request.
