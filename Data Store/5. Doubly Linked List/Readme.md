# Stack and Queue Implementation using Doubly Linked List

This C++ project demonstrates the implementation of a Stack and Queue using a doubly linked list. The doubly linked list provides efficient insertion and deletion operations, making it suitable for implementing both Stack and Queue data structures.

## Table of Contents

- [Overview](#overview)
- [Doubly Linked List](#doubly-linked-list)
- [Stack Implementation](#stack-implementation)
- [Queue Implementation](#queue-implementation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project showcases the implementation of a doubly linked list and its use in creating a Stack and a Queue. The doubly linked list allows for efficient traversal in both forward and reverse directions, making it a suitable choice for various applications.

## Doubly Linked List

The `DoublyLinkedList` class provides the foundation for the Stack and Queue implementations. It includes methods for inserting at both ends, deleting, and displaying the elements.

## Stack Implementation

The `Stack` class utilizes the `DoublyLinkedList` to implement a basic stack. It supports push, pop, and top operations.

## Queue Implementation

The `Queue` class also uses the `DoublyLinkedList` to implement a basic queue. It supports enqueue, dequeue, front, and rear operations.

## Usage

### Prerequisites

- C++ compiler

### Building and Running

1. Clone the repository:

    ```bash
    git clone https://github.com/Basharul2002/Data-Structure-Algorithm/tree/main/Data%20Store/5.%20Doubly%20Linked%20List.git
    ```

2. Compile the C++ code:

    ```bash
    g++ main.cpp DoublyLinkedList.cpp Stack.cpp Queue.cpp -o doubly_linked_list
    ```

3. Run the executable:

    ```bash
    ./doubly_linked_list
    ```

4. Follow the on-screen instructions to interact with the implemented Stack and Queue.

## Contributing

If you would like to contribute to this project, feel free to fork the repository and submit pull requests.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed.
