#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& data) : data(data), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    int count;

public:
    Queue();
    ~Queue();

    void push(const T& value);
    void pop();
    T front() const;
    int size() const;
    bool empty() const;
    void move_to_rear();
};

#include "Queue.cpp"

#endif 
