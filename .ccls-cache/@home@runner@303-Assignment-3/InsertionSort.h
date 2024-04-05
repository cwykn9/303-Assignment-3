#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

void insertion_sort(Node*& head);

#endif 

