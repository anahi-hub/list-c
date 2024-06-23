#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Set data of new node
    new_node->data = new_data;

    // Set next of new node to current head
    new_node->next = *head_ref;

    // Move head to point to new node
    *head_ref = new_node;
}

// Function to print all elements in the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Driver program to test above functions
int main() {
    // Initialize empty linked list
    struct Node* head = NULL;

    // Insert elements into linked list
    insertAtBeginning(&head, 42);
    insertAtBeginning(&head, 0);
    insertAtBeginning(&head, -42);

    // Print all elements in linked list
    printf("Linked list elements: ");
    printList(head);

    return 0;
}