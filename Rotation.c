#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *newNode (int data) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void insertNode (int data) {
    if (head == NULL) {
        head = newNode (data);
    }
    else {
        struct Node *curr = head;
        struct Node *node = newNode (data);
        while (curr -> next != NULL) {
            curr = curr -> next;
        }
        curr -> next = node;
    }
}

void insertAtBeg (int key) {
    if (head == NULL) {
        head = newNode (key);
    }
    else {
        struct Node *node = newNode (key);
        node -> next = head;
        head = node;
    }
}



void insertAtPos (int key, int pos) {
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = key;
    node -> next = NULL;
    struct Node *cur = head, *prev;
    int ind = 0;
    
    while (ind != pos) {
        prev = cur;
        cur = cur -> next;
        ind++;
    }
    node -> next = cur;
    prev -> next = node;
}

void deleteNode (int data) {
    if (head == NULL) {
        printf ("List is empty deletion is not possible !!");
    }
    else {
        struct Node *cur = head, *prev;
        while (cur -> data != data) {
            prev = cur;
            cur = cur -> next;
        }
        prev -> next = cur -> next;
    }
}

void printList () {
    struct Node *cur = head;
    while (cur != NULL) {
        printf ("%d ", cur -> data);
        cur = cur -> next;
    }
}

int main()
{
    struct Node *obj;
    int size, value, pos; 
    printf ("Enter the size : ");
    scanf ("%d", &size);
    printf ("Enter the data elements : \n");
    for (int i = 0; i < size; i++) {
        scanf ("%d", &value);
        insertNode (value);
    }
    printf ("Elements of the list : \n");
    printList();
    printf ("\nEnter the position and value to be inserted : ");
    scanf ("%d %d", &pos, &value);
    insertAtPos (value, pos);
    printf ("Elements after insertion : \n");
    printList();
    return 0;    
}