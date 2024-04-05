#include "Queue.h"
using namespace std;

template <typename T>
Queue<T>::Queue() : frontNode(nullptr), rearNode(nullptr), count(0) {}

template <typename T>
Queue<T>::~Queue() {
    while (frontNode != nullptr) {
        Node* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
    }
}

template <typename T>
void Queue<T>::push(const T& value) {
    Node* newNode = new Node(value);
    if (rearNode == nullptr) {
        frontNode = rearNode = newNode;
    } else {
        rearNode->next = newNode;
        rearNode = newNode;
    }
    count++;
}

template <typename T>
void Queue<T>::pop() {
    if (empty()) {
        cerr << "Queue is empty. Cannot pop.\n";
        return;
    }
    Node* temp = frontNode;
    frontNode = frontNode->next;
    delete temp;
    count--;
    if (frontNode == nullptr) {
        rearNode = nullptr;
    }
}

template <typename T>
T Queue<T>::front() const {
    if (empty()) {
        cerr << "Queue is empty. No front element.\n";
        exit(1);
    }
    return frontNode->data;
}

template <typename T>
int Queue<T>::size() const {
    return count;
}

template <typename T>
bool Queue<T>::empty() const {
    return count == 0;
}

template <typename T>
void Queue<T>::move_to_rear() {
    if (size() < 2) {
        cerr << "Queue must have at least 2 elements to perform move_to_rear operation.\n";
        return;
    }
    T frontElement = front();
    pop();
    push(frontElement);
}
