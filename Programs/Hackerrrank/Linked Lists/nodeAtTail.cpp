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

        SinglyLinkedList() {
            this->head = nullptr;
        }

};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    
    if (head == NULL) {
        SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
        // temp->next = NULL;
        // head = temp;
        
        return temp;
        
    } else {
        SinglyLinkedListNode *temp = head;
        while ((temp->next) != NULL) {
            temp = temp->next;
        }
        temp->next = node;
        // head = temp;
        
        return head;
    }
}