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
    LinkedList() : head(nullptr), tail(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        tail = nullptr;
    }

    void addToHead(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void addToTail(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void removeFromHead() {
        if (head == nullptr) {
            cerr << "List is empty, nothing to remove" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head == nullptr){
            tail = nullptr;
        }
        delete temp;
    }

    void display(){
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    int topElement(){
        if (head == nullptr) {
            cerr << "List is empty, nothing to remove" << endl;
        }
        return head->data;
    }

    int headdata(){
        if (head == nullptr) {
            cerr << "List is empty, nothing to remove" << endl;
        }
        return head->data;
    }

    int taildata(){
        if (tail == nullptr) {
            cerr << "List is empty, nothing to remove" << endl;;
        }
        return tail->data;
    }

    bool isEmpty(){
        return head == nullptr;
    }
};

#endif