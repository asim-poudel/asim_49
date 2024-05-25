#include <iostream>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std; 

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; 
    Node* tail; 
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void addToHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void addToTail(int value){
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }

    void removeFromHead() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout <<endl;
    }

    int topElement() {
        return head->data;
    }

    int headdata(){
        return head->data;
    }

    int taildata(){
        return tail->data;
    }
    bool isEmpty() {
        return head == nullptr;
    }
};

#endif
