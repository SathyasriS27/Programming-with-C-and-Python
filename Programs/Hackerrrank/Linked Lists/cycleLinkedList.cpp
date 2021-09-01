#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *ptr1, *ptr2 = new SinglyLinkedListNode(0);
    ptr1 = head;
    ptr2 = head;

    if (head == NULL) {
        return false;
    } else {
        
        while ((ptr1->next) != NULL) {
            SinglyLinkedListNode *temp = new SinglyLinkedListNode(0);
            temp = ptr1->next;
            if (temp->next != NULL) {
                ptr1 = temp->next;
                ptr2 = ptr2->next;
                
                if (ptr1 == ptr2) {
                    return true;
                }
                
            } else {
                return false;
            }
        }

        return false;
    }
}