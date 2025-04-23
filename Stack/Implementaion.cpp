#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main() {
    clsMyStack<int> MyStack;
    
    cout << "\n*** Stack Implementation Examples ***\n";
    
    // Check if stack is empty
    cout << "\nIs Stack Empty? " << (MyStack.isEmpty() ? "Yes" : "No") << endl;
    
    // Push elements
    cout << "\nPushing elements: 10, 20, 30, 40, 50\n";
    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);
    
    // Print stack
    cout << "\nStack contents:\n";
    MyStack.print();
    
    // Stack size
    cout << "\nStack size: " << MyStack.size() << endl;
    
    // Top element
    cout << "\nTop element: " << MyStack.top() << endl;
    
    // Pop elements
    cout << "\nPopping two elements\n";
    MyStack.pop();
    MyStack.pop();
    
    cout << "\nStack after popping:\n";
    MyStack.print();
    
    // Clear stack
    cout << "\nClearing the stack\n";
    MyStack.clear();
    
    cout << "\nIs Stack Empty? " << (MyStack.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
