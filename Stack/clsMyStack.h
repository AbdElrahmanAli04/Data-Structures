#include "clsMyQueue.h"

template <class T> class clsMyStack : private clsMyQueue <T> {
public:
    void push(T value) {
        clsMyQueue<T>::insertAtBack(value);
    }

    void pop() {
        clsMyQueue<T>::List.DeleteLastNode();
    }

    T top() {
        return clsMyQueue<T>::back();
    }

    int size() {
        return clsMyQueue<T>::size();
    }

    bool isEmpty() {
        return clsMyQueue<T>::isEmpty();
    }

    void clear() {
        clsMyQueue<T>::clear();
    }

    void print() {
        clsMyQueue<T>::print();
    }
};
