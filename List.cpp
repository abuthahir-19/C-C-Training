#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void append (struct Node **head, int key) {
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = key;
    node -> next = NULL;
    if (*head == NULL) {
        *head = node;
    }
    else {
        struct Node *cur = *head;
        while (cur -> next != NULL) {
            cur = cur -> next;
        }
        cur -> next = node;
    }
}

void insertAtBeg (struct Node **head, int value) {
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = value;
    node -> next = *head;
    *head = node;
}

void printList (struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

int main() 
{
    struct Node *head = NULL; int n;
    while (true) {
        cin >> n;
        if (n != -1) {
            append (&head, n);
        }
        else break;
    }
    cout << "Element of the list are : " << endl;
    printList (head);
    return 0;
}