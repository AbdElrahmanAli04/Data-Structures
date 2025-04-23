#include "clsDblLinkedList.h"

template <class T> class clsMyQueue  {

    protected:

    clsDoublyLinkedList <T> List ;

public:
    void print() {
        List.Print() ;
    }

    void push(T value) {
        List.InsertAtEnd(value).;
    }

    void pop () {
        List.DeleteFirstNode() ;
    }


    T front() {
        return List.GetValueByIndex(0);
    }

    T back () {
        return List.GetValueByIndex(List.GetSize() - 1 ) ;
    }

    T getValueByIndex(int index) {
        return List.GetValueByIndex(index) ;
    }

    void reverse () {
        List.Reverse() ;
    }

    void updateItemByIndex(int index , T newValue) {
        List.UpdateValueByIndex(index , newValue) ;
    }

    void insertAfter(int index , T insertedValue) {
        List.InsertAfterIndex(index , insertedValue) ;
    }
    
    void insertAtFront(T insertedValue) {
        List.InsertAtBeginning(insertedValue) ;
    }

    void insertAtBack (T insertedValue) {
        List.InsertAtEnd(insertedValue) ;
    }


    void clear() {
        List.Clear() ;
    }

    int size() {
        return List.GetSize() ;
    }

    bool isEmpty() {
        return List.IsEmpty() ;
    }



};