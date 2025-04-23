#include "clsDblLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    cout << "\n=== Doubly Linked List Operations ===\n\n";
    
    clsDoublyLinkedList<int> MyList;
    
    // 1. InsertAtBeginning
    cout << "1. InsertAtBeginning: 30, 20, 10\n";
    MyList.InsertAtBeginning(30);
    MyList.InsertAtBeginning(20);
    MyList.InsertAtBeginning(10);
    cout << "List: ";
    MyList.Print();
    
    // 2. InsertAtEnd
    cout << "\n2. InsertAtEnd: 40, 50\n";
    MyList.InsertAtEnd(40);
    MyList.InsertAtEnd(50);
    cout << "List: ";
    MyList.Print();
    
    // 3. InsertAfter with value
    cout << "\n3. InsertAfter value 20 with 25\n";
    MyList.InsertAfter(20, 25);
    cout << "List: ";
    MyList.Print();
    
    // 4. InsertAfterIndex
    cout << "\n4. InsertAfterIndex 3 with 35\n";
    MyList.InsertAfterIndex(3, 35);
    cout << "List: ";
    MyList.Print();
    
    // 5. Find
    cout << "\n5. Finding value 30\n";
    Node<int>* foundNode = MyList.Find(30);
    cout << "Value 30: " << (foundNode != NULL ? "Found" : "Not Found") << "\n";
    
    // 6. GetValueByIndex
    cout << "\n6. Getting value at index 2\n";
    cout << "Value at index 2: " << MyList.GetValueByIndex(2) << "\n";
    
    // 7. UpdateValueByIndex
    cout << "\n7. Updating value at index 2 to 99\n";
    MyList.UpdateValueByIndex(2, 99);
    cout << "List after update: ";
    MyList.Print();
    
    // 8. DeleteNode by value
    cout << "\n8. Deleting value 25\n";
    MyList.DeleteNode(25);
    cout << "List after deletion: ";
    MyList.Print();
    
    // 9. DeleteFirstNode
    cout << "\n9. Deleting first node\n";
    MyList.DeleteFirstNode();
    cout << "List after deleting first: ";
    MyList.Print();
    
    // 10. DeleteLastNode
    cout << "\n10. Deleting last node\n";
    MyList.DeleteLastNode();
    cout << "List after deleting last: ";
    MyList.Print();
    
    // 11. Size and Empty status
    cout << "\n11. Size and Empty status\n";
    cout << "Current size: " << MyList.GetSize() << "\n";
    cout << "Is empty: " << (MyList.IsEmpty() ? "Yes" : "No") << "\n";
    
    // 12. Reverse
    cout << "\n12. Reversing the list\n";
    MyList.Reverse();
    cout << "List after reverse: ";
    MyList.Print();
    
    // 13. Clear
    cout << "\n13. Clearing the list\n";
    MyList.Clear();
    cout << "Is empty after clear: " << (MyList.IsEmpty() ? "Yes" : "No") << "\n";
    
    return 0;
}