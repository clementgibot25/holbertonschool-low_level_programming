# Singly Linked Lists in C

## Introduction
A **singly linked list** is a data structure that consists of nodes. Each node contains two components:
1. **Data**: The actual value stored in the node.
2. **Pointer**: A reference to the next node in the list.

Unlike arrays, linked lists provide dynamic memory allocation, allowing efficient insertions and deletions without memory reallocation.

## Structure Definition
A node in a singly linked list is typically defined as:

```c
#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;          // Data field
    struct Node* next; // Pointer to the next node
};
```

## Basic Operations

### 1. Creating a New Node
```c
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
```

### 2. Inserting a Node at the Beginning
```c
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
```

### 3. Inserting a Node at the End
```c
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

### 4. Deleting a Node
```c
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head, *prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}
```

### 5. Displaying the List
```c
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
```

## Example Usage
```c
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    displayList(head);

    deleteNode(&head, 20);
    displayList(head);

    return 0;
}
```

## Advantages of Singly Linked Lists
- **Dynamic Size**: Unlike arrays, linked lists do not require a predefined size.
- **Efficient Insertions/Deletions**: Adding/removing nodes does not require shifting elements.

## Disadvantages
- **Extra Memory Overhead**: Each node requires extra memory for the pointer.
- **Sequential Access**: Unlike arrays, direct access to elements is not possible.

## Conclusion
Singly linked lists are a fundamental data structure used in dynamic memory management, stacks, queues, and more. Understanding their implementation is crucial for efficient memory utilization and algorithm development.

