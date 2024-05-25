#include "array.h"
#include <iostream>

using namespace std;


Queue::Queue() : frontIndex(0), backIndex(-1) {}

int Queue::enqueue(int element) {
    if (isFull()) {
        cerr<<"Queue is full. Cannot enqueue element."<<endl;
        return 0;
    }
    backIndex = (backIndex + 1) % MAX_SIZE;
    arr[backIndex] = element;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cerr<<"Queue is empty. Cannot dequeue element."<<endl;
        return -1;
    }
    int element = arr[frontIndex];
    frontIndex = (frontIndex + 1) % MAX_SIZE;
    return element;
}

bool Queue::isEmpty() {
    return (backIndex + 1) % MAX_SIZE == frontIndex;
}

bool Queue::isFull() {
    return (backIndex + 2) % MAX_SIZE == frontIndex;
}

int Queue::front() {
    if (isEmpty()) {
        cerr<<"Queue is empty. No front element." <<endl;
        return -1;
    }
    return arr[frontIndex];
}

int Queue::back() {
    if (isEmpty()) {
        cerr<<"Queue is empty. No back element."<<endl;
        return -1;
    }
    return arr[backIndex];
}

int main(){


    Queue queue;
    queue.enqueue(111);
    queue.enqueue(222);
    queue.enqueue(322);

    cout << "Front element of queue: " << queue.front() << endl;
    cout << "Back element of queue: " << queue.back() << endl;
    cout << "Dequeued element from queue: " << queue.dequeue() << endl;
    cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (queue.isFull() ? "Yes" : "No") << endl;

    return 0;

}