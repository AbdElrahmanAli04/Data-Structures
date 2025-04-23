#include "clsMyQueue.h"
#include <iostream>
using namespace std;

int main() {
    clsMyQueue <int> MyQueue;

    cout << "\nPushing elements: 10, 20, 30, 40, 50\n";
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "\nQueue elements: ";
    MyQueue.print();

    cout << "\nTesting getValueByIndex(2): " << MyQueue.getValueByIndex(2) << endl;

    cout << "\nUpdating value at index 2 to 99\n";
    MyQueue.updateItemByIndex(2, 99);
    cout << "Queue after update: ";
    MyQueue.print();

    cout << "\nInserting 77 after index 1\n";
    MyQueue.insertAfter(1, 77);
    cout << "Queue after insert: ";
    MyQueue.print();

    cout << "\nInserting 100 at front\n";
    MyQueue.insertAtFront(100);
    cout << "Queue after front insert: ";
    MyQueue.print();

    cout << "\nInserting 200 at back\n";
    MyQueue.insertAtBack(200);
    cout << "Queue after back insert: ";
    MyQueue.print();

    cout << "\nReversing the queue\n";
    MyQueue.reverse();
    cout << "Queue after reverse: ";
    MyQueue.print();

    cout << "\nQueue Size: " << MyQueue.size() << endl;
    cout << "Front element: " << MyQueue.front() << endl;
    cout << "Back element: " << MyQueue.back() << endl;

    cout << "\nClearing Queue...\n";
    MyQueue.clear();
    cout << "Is Queue Empty? " << (MyQueue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}