#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

void insertBeginning(int data, struct Node* head) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head->next;
    head->next = temp;
}

void insertMiddle(int data, int position, struct Node* head) {
    for (int i = 0; i < (position - 1); i++) {
        head = head->next;
    }

    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = data;
    temp->next = head->next;
    head->next = temp;
}

void insertTail(int data, struct Node* head) {
    if (head == NULL) {
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = head;
        head->next = temp;
    } else {
        if ((head->next) != NULL) {
            insertTail(data, (head->next));
        } else {
            struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = data;
            temp->next = head->next;
            head->next = temp;
        }
    }
}

void main() {
    struct Node *head = NULL;
    insertBeginning(3, head);
    insertMiddle(7, 1, head);
}