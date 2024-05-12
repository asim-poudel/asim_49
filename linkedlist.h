#include <iostream>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Define a Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with given data
    Node(int value) : data(value), next(nullptr) {}
};

// Define a LinkedList class to represent the linked list
class LinkedList {
private:
    Node* head; // Pointer to the first node in the linked list
    Node* tail; //Pointer to the last node in the linked list
public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Destructor to deallocate memory occupied by the linked list
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // Method to insert a new node at the beginning of the linked list
    void addToHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    //Method to insert a new node at the end of the linked list
    void addToTail(int value){
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }

    // Method to remove a node from the head of the linked list
    void removeFromHead() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Method to print all elements in the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Method to return the data of the top element of the linked list
    int topElement() {
        return head->data;
    }

    // Method to check if the linked list is empty
    bool isEmpty() {
        return head == nullptr;
    }
};

#endif
