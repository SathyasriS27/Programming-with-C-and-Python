#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int newData) {
        this->data = newData;
        this->next = NULL;
    }
};

Node *head = NULL;

void push(int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void pop(int data) {
    Node *temp = head->next;
    head->next = NULL;
    head = temp;
}

int peek() {
    return head->data;
}

int main() {
    vector<int> list = {4, 6, 8, 2, 1};
    Node *head = NULL;

    for (int i = 0; i < list.size(); i++) {
        push(list[i]);
    }

    for (int i = 0; i < list.size(); i++) {
        int tempInt = peek();
        cout << tempInt << endl;
        pop(list[i]);
    }
}