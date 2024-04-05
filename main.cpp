#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> myQueue;
    for (int i = 1; i <= 10; ++i) {
        myQueue.push(i);
    }

    cout << "Elements in the queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << "\n";

    for (int i = 1; i <= 10; ++i) {
        myQueue.push(i);
    }
    myQueue.move_to_rear();

    cout << "After move_to_rear: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << "\n";

    return 0;
}
