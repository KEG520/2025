#include "stack.h"
#include <iostream>

// Default constructor (initializes with capacity of 50)
template <typename T>
Stack<T>::Stack() : capacity(50), count(0) {
    data = new T[capacity];
}

// Parameterized constructor
template <typename T>
Stack<T>::Stack(size_t cap) : capacity(cap), count(0) {
    data = new T[capacity];
}

// Destructor
template <typename T>
Stack<T>::~Stack() {
    delete[] data;
}

// Push an element onto the stack
template <typename T>
void Stack<T>::push(const T& val) {
    if (count >= capacity) {
        throw std::length_error("Stack is full");
    }
    data[count++] = val;
}

// Pop the top element from the stack
template <typename T>
void Stack<T>::pop() {
    if (count == 0) {
        throw std::out_of_range("Stack is empty");
    }
    --count;
}

// Get the top element of the stack
template <typename T>
const T& Stack<T>::top() const {
    if (count == 0) {
        throw std::out_of_range("Stack is empty");
    }
    return data[count - 1];
}

// Get the number of elements in the stack
template <typename T>
size_t Stack<T>::size() const {
    return count;
}

// Check if stack is empty
template <typename T>
bool Stack<T>::empty() const {
    return count == 0;
}
