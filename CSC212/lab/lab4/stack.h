#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class Stack {
private:
    T* data;          // Pointer to stack array
    size_t capacity;  // Max capacity of stack
    size_t count;     // Current number of elements

public:
    // Default constructor (capacity = 50)
    Stack();

    // Parameterized constructor
    Stack(size_t cap);

    // Destructor
    ~Stack();

    // Push an element onto the stack
    void push(const T& val);

    // Pop the top element from the stack
    void pop();

    // Get the top element of the stack
    const T& top() const;

    // Get the number of elements in the stack
    size_t size() const;

    // Check if stack is empty
    bool empty() const;
};

#include "stack.cpp"  // Include implementation
#endif
