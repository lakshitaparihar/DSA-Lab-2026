// A program to print the elements of a linked list in reverse order without disturbing the linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printReverse(struct Node *node) {
    if (node == NULL) {
        return;   // base case: reached end of list
    }
    printReverse(node->next);   
    printf("%d ", node->data);  
}

void displayForward() {
    struct Node *temp = head;
    printf("Original list (forward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insert(value);
    }

    displayForward();

    printf("List in reverse order: ");
    printReverse(head);
    printf("\n");

    return 0;
}