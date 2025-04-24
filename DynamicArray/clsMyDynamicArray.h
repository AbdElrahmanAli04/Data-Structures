#include <iostream>

using namespace std ;



template <class T> class clsMyDynamicArray {

    private : 
    T *Arr_  ; 
    int size_ = 0  ;

    bool isOutOfBoundries (int index) {
        if (index >= size_ || index < 0  ) {
            return true;
        }
        return false ;
    }

    public : 

    clsMyDynamicArray(int Size = 0) {
        
        if (Size < 0) {
            Size = 0 ;
        }

        size_ = Size ;

        Arr_ =  new T [Size] ;
    }

    ~clsMyDynamicArray() {
        delete [] Arr_ ;
        size_ = 0 ; 
    }


    void setItem(int index , T value) {
        Arr_[index] = value ;
    }

    void resize(int newSize) {

        if (newSize < 0 || newSize == size_) {
            return ;
        }

        T* newArr = new T[newSize] ;

        int minSize = min(size_, newSize);

        for (int i = 0 ; i<minSize ; i++) {
            newArr[i] = Arr_[i] ;
        }

        for (int i = minSize; i < newSize; i++) {
            newArr[i] = T();  
        }

        delete[] Arr_;
        Arr_ = newArr;
        size_ = newSize;

    }

    T getItemByIndex(int index) {
        if (isOutOfBoundries(index)) {
            return T() ;
        }

        return Arr_[index] ;
    }

    void reverse () {
        for (int i = 0 ; i <size_/2 ; i++) {
            T Temp = Arr_[i] ;
            Arr_[i] = Arr_[size_ -1 - i] ;
            Arr_[size_ -1 - i] = Temp ;
        }
        
    }

    int find(T value) {
        for (int i = 0 ; i<size_ ; i++) {
            if (Arr_[i] == value) {
                return i ;
            }
        }
        return -1 ;
    }

    void insertAt(int index, T insertedvalue) {
    
    if (isOutOfBoundries(index)) {
        return;
    }
    
    resize(size_ + 1);   
    
    // Shift elements to make space
    for (int i = size_ - 1; i >= index; i--) {
        Arr_[i] = Arr_[i-1];
    }
    
    // Insert the new value
    Arr_[index] = insertedvalue;
}

    void insetAtBeginning (T insertedvalue) {
        insertAt(0 , insertedvalue) ;
    }

    void insertAtEnd(T insertedvalue){
        resize(size_ + 1) ;
        setItem(size_ - 1 , insertedvalue ) ;
    }

    void insertBeforeIndex (int index , T insertedValue) {
        insertAt(index - 1 , insertedValue ) ;
    }

    void insertAfterIndex (int index , T insertedValue) {
        insertAt(index + 1 , insertedValue ) ;
    }


    void deleteItemAtIndex(int index) {
        if (isOutOfBoundries(index)) {
            return ;
        }

        T *Temp = new T [size_-1] ;
        int counter = 0 ;
        for (int i = 0 ; i<size_ ; i++ ) {
            if (i != index) {
                Temp[counter] = Arr_[i] ;
                counter ++ ;                
            }
        }
        delete [] Arr_ ; 
        Arr_ = Temp ; 
        size_ -- ; 
    }

    void deleteFirstItem () {
        deleteItemAtIndex(0) ;
    }

    void deleteLastItem() {
        deleteItemAtIndex(size_ - 1 ) ; 


        // Another solution  
            //size_ -- ;
        //This solution is simple and faster and also avoid memory allocation but wastes a block of memory 
        }

    void deleteItemByValue( T value) {
        deleteItemAtIndex(find(value))  ;
    }



    void print() {
        for (int i = 0 ; i < size_ ; i++) {
            cout << Arr_[i] << " " ;
        }
        cout << endl ;
    }

    int size () {
        return size_ ; 
    }

    bool isEmpty () {
        return !size_ ; 
    }

    void clear () {
        delete [] Arr_ ; 
        Arr_ = new T[0] ;
        size_ = 0;

    }

};