#include <iostream>
#include <list>

using namespace std ; 

template <class T> class Node {
    public :
    T Value ; 
    Node * Next = NULL ; 
    Node * Previous = NULL ;

};

template <class T> class DoublyLinkedList {
    
    private :
    int size_ = 0;
    Node<T>* head_ = NULL;
    Node<T>* iterator_ = NULL;

    public : 

    DoublyLinkedList () {

    }

    void Print () {
        iterator_ = head_;
        while (iterator_ != NULL) {
            cout << iterator_->Value << " " ; 
            iterator_ = iterator_->Next ;  
        }
        cout << endl ;
    
    }


    void InsertAtBeginning(T value) {

        Node <T> *newNode = new Node <T> () ;
        

        newNode->Value = value ;
        newNode->Next = head_ ;
        newNode->Previous = NULL ;

        if (head_ != NULL) {
            head_->Previous = newNode ;
        }

        head_ = newNode ;
        size_ ++ ;
    }

    Node <T> *Find ( T value) {
        iterator_ = head_ ;
        while (iterator_ != NULL) {
            if (iterator_->Value == value) {
                return iterator_ ; 
            }
            iterator_ = iterator_->Next ;
        }
        return NULL ;
    }




    void InsertAfter(T value, T insertedValue) {
        Node<T>* current = Find(value);

        if (current == NULL) {
            return;
        }

        Node<T>* newNode = new Node<T>();
        newNode->Value = insertedValue;
        newNode->Next = current->Next;
        newNode->Previous = current;

        if (current->Next != NULL) {
            current->Next->Previous = newNode;
        }

        current->Next = newNode;
        size_++;
    }

    void InsertAfterIndex(int index, T insertedValue) {
        if (GetNodeByIndex(index) == NULL) {
            return;
        }
        InsertAfter(GetValueByIndex(index), insertedValue);
    }


    void InsertAtEnd(T value) {

            Node <T> *newNode = new Node <T>() ;
            newNode->Value = value ;
            newNode->Next = NULL ;

            
            if (head_ == NULL) {
                head_ = newNode ;
                newNode->Previous = NULL ;
            }
    
            else {
                Node <T> *lastNode = head_ ;
                while ( lastNode->Next != NULL  ) {
                    lastNode = lastNode->Next ;
                }
    
                newNode->Previous = lastNode ;
                lastNode->Next = newNode ;
            }
    
            size_ ++ ;
        }

    void DeleteNode( T value){
            if (head_ == NULL) {
                return ;
            }
    
    
            if (head_->Value == value) { //Deletes the first node IF it is the hunted node 
                iterator_ = head_ ; // Both Addressses are the same 
                if (head_->Next != NULL) {
                    head_ = head_->Next ;
                    head_->Previous = iterator_->Previous ;
                }
                delete iterator_ ;
            }
    
            iterator_ = head_ ; // Both Addressses are the same 
            while (iterator_->Next != NULL) // Logic for any node except first node 
            {
                if (iterator_->Next->Value == value) {
    
                    Node <T> *temp = iterator_->Next ;
                    iterator_->Next = iterator_->Next->Next ;
                    if (iterator_->Next != NULL) {
                        iterator_->Next->Previous = temp->Previous ;
                    }
                    delete temp ;
                    size_ -- ;
    
                }
                else {
                    iterator_ = iterator_->Next ; 
                }
            }
            
        }

    void DeleteNode( Node <T> *&To_be_Deleted) {
        if (head_ == NULL || To_be_Deleted == NULL) {
            return ;
        }

        if (head_->Value == To_be_Deleted->Value) {  
            iterator_ = head_ ;  
            if (head_->Next != NULL) {
                head_ = head_->Next ;
                head_->Previous = iterator_->Previous ;
            }
            delete iterator_ ;
            size_ -- ;
            return ;
        }


        else {
            Node <T> *temp = To_be_Deleted->Previous ;
            temp->Next = To_be_Deleted->Next ;
            if (To_be_Deleted->Next != NULL) {
                To_be_Deleted->Next->Previous = temp ;
            }
            delete To_be_Deleted ;
            size_ -- ;
        }
        }


    void DeleteFirstNode ( ) {
        
            if (head_ == NULL) {
                return ;
            }

            else {
                iterator_ = head_ ;  
                head_ = head_->Next ;
                if (iterator_->Previous != NULL || head_ != NULL ) {
                    head_->Previous = NULL ;
                }
                delete iterator_ ;

            }
    
            size_ -- ;
        }
    
    void DeleteLastNode() {
        
        if (head_ == NULL) {
            return ;
        }


        if (head_->Next == NULL) {
            head_ = NULL ;
            delete head_ ; 
            size_ -- ;
            return ;
        }

        iterator_ = head_ ; // Both Addressses are the same 

        while (iterator_->Next->Next != NULL)  
        {
                iterator_ = iterator_->Next ; 
        }

        Node <T> *temp = iterator_->Next ;
        iterator_->Next->Previous = temp->Previous ;
        iterator_->Next = iterator_->Next->Next ;
        delete temp ;
        size_ -- ;

    }

    int GetSize() {
        return size_;
    }
    
    bool IsEmpty() {
        if (head_ == nullptr) {
            return true ;
        }
        return false ;
    }
    
    void Clear () {
        while (size_ > 0) {
            DeleteFirstNode();
        }
    }

    void Reverse () {
        Node <T> *Temp = head_;  
        Node <T> *Current = head_;
        
        while (Current != NULL) {
            Temp = Current->Previous;
            Current->Previous = Current->Next;
            Current->Next = Temp;
            Current = Current->Previous;
        }
        
        // Update Head to point to the last node (new first node)
        if (Temp != NULL) {
            head_ = Temp->Previous;
        }
    }

    Node <T> * GetNodeByIndex (int index) {
        iterator_ = head_ ;
        if (index >= 0 && index < size_) {
            for (int i = 0 ; i<index ; i++) {
                    iterator_ = iterator_->Next ;
            }
            return iterator_ ;    
        }

        return NULL ;
    }

    T GetValueByIndex (int index ) {
        if (GetNodeByIndex(index) != nullptr) {
            return GetNodeByIndex(index)->Value ;
        }
        return T(); // Return default value for type T instead of -1
    }

    void UpdateValueByIndex (int index , T newValue) {
        if (GetNodeByIndex(index) == nullptr) {
            return ;
        }
        else {
            GetNodeByIndex(index)->Value = newValue ;
        }
    }


} ;
