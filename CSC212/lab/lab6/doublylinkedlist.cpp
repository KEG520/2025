#include <iostream>
#include <stdexcept>
#include "doublylinkedlist.h"

struct Node {
    int value;
    Node* prev;
    Node* next;
    Node(int v) : value(v), prev(nullptr), next(nullptr) {}
};

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), list_size(0) {}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

void DoublyLinkedList::push_back(int v) {
    Node* newNode = new Node(v);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    list_size++;
}

void DoublyLinkedList::push_front(int v) {
    Node* newNode = new Node(v);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    list_size++;
}

void DoublyLinkedList::push_at(int idx, int v) {
    if (idx < 0 || idx > list_size) {
        throw std::out_of_range("Index out of range");
    }
    if (idx == 0) {
        push_front(v);
        return;
    }
    if (idx == list_size) {
        push_back(v);
        return;
    }
    Node* newNode = new Node(v);
    Node* temp = head;
    for (int i = 0; i < idx - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    list_size++;
}

void DoublyLinkedList::pop_back() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail) {
        tail->next = nullptr;
    } else {
        head = nullptr;
    }
    delete temp;
    list_size--;
}

void DoublyLinkedList::pop_front() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) {
        head->prev = nullptr;
    } else {
        tail = nullptr;
    }
    delete temp;
    list_size--;
}

void DoublyLinkedList::pop_at(int idx) {
    if (idx < 0 || idx >= list_size) {
        throw std::out_of_range("Index out of range");
    }
    if (idx == 0) {
        pop_front();
        return;
    }
    if (idx == list_size - 1) {
        pop_back();
        return;
    }
    Node* temp = head;
    for (int i = 0; i < idx; i++) {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    list_size--;
}

int DoublyLinkedList::back() {
    if (!tail) throw std::runtime_error("List is empty");
    return tail->value;
}

int DoublyLinkedList::front() {
    if (!head) throw std::runtime_error("List is empty");
    return head->value;
}

int DoublyLinkedList::at(int idx) {
    if (idx < 0 || idx >= list_size) {
        throw std::out_of_range("Index out of range");
    }
    Node* temp = head;
    for (int i = 0; i < idx; i++) {
        temp = temp->next;
    }
    return temp->value;
}

int DoublyLinkedList::size() {
    return list_size;
}

bool DoublyLinkedList::empty() {
    return list_size == 0;
}

void DoublyLinkedList::clear() {
    while (head) {
        pop_front();
    }
}

void DoublyLinkedList::print() {
    Node* temp = head;
    while (temp) {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

bool DoublyLinkedList::contains(int v) {
    Node* temp = head;
    while (temp) {
        if (temp->value == v) return true;
        temp = temp->next;
    }
    return false;
}
