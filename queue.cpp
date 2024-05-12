#include "LinkedList.h"

class Queue : public LinkedList {
public:
    Queue() {}
    ~Queue() {}

    // Add an item onto the queue
    void enqueue(int item) {
        addToTail(item);
    }

    //Remove an item from the queue
    int dequeue() {
        int item = topElement();
        removeFromHead();
        return item;
    }

    // Check if the queue is empty
    bool isempty() {
      return isEmpty();
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.dequeue();
    q.enqueue(49);
    q.enqueue(21);
}
