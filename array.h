#ifndef ARRAY_H
#define ARRAY_H

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int topIndex;

public:
    Stack();
    int push(int element);
    int pop();
    bool isEmpty();
    bool isFull();
    int top();
};

class Queue {
private:
    int arr[MAX_SIZE];
    int frontIndex;
    int backIndex;

public:
    Queue();
    int enqueue(int element);
    int dequeue();
    bool isEmpty() ;
    bool isFull() ;
    int front() ;
    int back() ;
};

#endif
