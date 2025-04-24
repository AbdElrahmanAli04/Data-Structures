#include "clsMyDynamicArray.h"
#include <iostream>

using namespace std;

int main() {
    cout << "\n=== My Dynamic Array ===\n\n";
    
    // Constructor & setItem
    cout << "1) Creating array and setting items:\n";
    clsMyDynamicArray<int> MyDynamicArr(5);
    for (int i = 0; i < 5; i++) {
        MyDynamicArr.setItem(i, i + 1);
    }
    MyDynamicArr.print();
    
    // Size and isEmpty
    cout << "\n2) Size and isEmpty check:\n";
    cout << "Size: " << MyDynamicArr.size() << endl;
    cout << "Is Empty? " << (MyDynamicArr.isEmpty() ? "Yes" : "No") << endl;
    
    // getItemByIndex
    cout << "\n3) Getting items by index:\n";
    cout << "Item at index 2: " << MyDynamicArr.getItemByIndex(2) << endl;
    cout << "Item at invalid index -1: " << MyDynamicArr.getItemByIndex(-1) << endl;
    
    // Find
    cout << "\n4) Finding items:\n";
    cout << "Index of value 3: " << MyDynamicArr.find(3) << endl;
    cout << "Index of value 10: " << MyDynamicArr.find(10) << endl;
    
    // Reverse
    cout << "\n5) Reversing array:\n";
    cout << "Before reverse: ";
    MyDynamicArr.print();
    MyDynamicArr.reverse();
    cout << "After reverse:  ";
    MyDynamicArr.print();
    
    // Insert operations
    cout << "\n6) Insert operations:\n";
    cout << "Insert 100 at index 2:\n";
    MyDynamicArr.insertAt(2, 100);
    MyDynamicArr.print();
    
    cout << "Insert 200 at beginning:\n";
    MyDynamicArr.insetAtBeginning(200);
    MyDynamicArr.print();
    
    cout << "Insert 300 at end:\n";
    MyDynamicArr.insertAtEnd(300);
    MyDynamicArr.print();
    
    // Delete operations
    cout << "\n7) Delete operations:\n";
    cout << "Delete item at index 2:\n";
    MyDynamicArr.deleteItemAtIndex(2);
    MyDynamicArr.print();
    
    cout << "Delete first item:\n";
    MyDynamicArr.deleteFirstItem();
    MyDynamicArr.print();
    
    cout << "Delete last item:\n";
    MyDynamicArr.deleteLastItem();
    MyDynamicArr.print();
    
    cout << "Delete item with value 3:\n";
    MyDynamicArr.deleteItemByValue(3);
    MyDynamicArr.print();
    
    // Resize
    cout << "\n8) Resize operations:\n";

    
    cout << "Resize to 3:\n";
    MyDynamicArr.resize(3);
    MyDynamicArr.print();
    

    cout << "Resize to 8:\n";
    MyDynamicArr.resize(8);
    MyDynamicArr.print();

    
    // Clear
    cout << "\n9) Clear array:\n";
    MyDynamicArr.clear();
    cout << "Size after clear: " << MyDynamicArr.size() << endl;
    cout << "Is Empty? " << (MyDynamicArr.isEmpty() ? "Yes" : "No") << endl;
    MyDynamicArr.print();
    
    return 0;
}