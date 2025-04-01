# Doubly Linked Lists in C

## Introduction
A **doubly linked list** is a type of linked list where each node contains three parts:
1. **Data** - The actual value stored in the node.
2. **Pointer to the next node** - A reference to the next node in the list.
3. **Pointer to the previous node** - A reference to the previous node in the list.

This structure allows traversal in both forward and backward directions, making it more flexible than singly linked lists.

## Structure Definition
In C, a doubly linked list node is typically defined as follows:

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct dlist_s {
    char *str;             // Data: string stored in the node
    size_t len;            // Length of the string
    struct dlist_s *prev;  // Pointer to the previous node
    struct dlist_s *next;  // Pointer to the next node
} dlist_t;
```

## Operations
### 1. Adding a Node at the Beginning
```c
dlist_t *add_dnode_begin(dlist_t **head, const char *str);
```
- Creates a new node.
- Points `next` to the current head.
- Updates `prev` of the current head.
- Updates `head` to the new node.

### 2. Adding a Node at the End
```c
dlist_t *add_dnode_end(dlist_t **head, const char *str);
```
- Traverses the list to the last node.
- Adds the new node after it.
- Updates `prev` of the new node.

### 3. Deleting a Node
```c
void delete_dnode(dlist_t **head, dlist_t *node);
```
- Updates the `prev` and `next` pointers of adjacent nodes.
- Frees the node’s memory.

### 4. Traversing the List
- **Forward Traversal**
```c
void print_dlist_forward(dlist_t *head);
```
- **Backward Traversal**
```c
void print_dlist_backward(dlist_t *tail);
```

### 5. Freeing the List
```c
void free_dlist(dlist_t *head);
```
- Iterates through the list and frees each node.

## Advantages
- **Efficient Deletion & Insertion**: Unlike singly linked lists, no need to traverse the list to find the previous node.
- **Bidirectional Traversal**: Can move both forward and backward.

## Disadvantages
- **More Memory Usage**: Each node stores an extra pointer (`prev`).
- **More Complexity**: Additional handling required for `prev` pointers.

## Example Usage
```c
int main(void) {
    dlist_t *head = NULL;

    add_dnode_begin(&head, "First");
    add_dnode_end(&head, "Second");
    add_dnode_end(&head, "Third");

    print_dlist_forward(head);
    free_dlist(head);
    return 0;
}
```

## Conclusion
Doubly linked lists provide greater flexibility than singly linked lists at the cost of additional memory usage. They are useful when frequent insertions and deletions are required in both directions.

---