
#include "linkedlist.h"

class Queue : public LinkedList {
public:
    Queue() {}
    ~Queue() {}

    void enqueue(int item) {
        addToTail(item);
    }

    int dequeue() {
        int item = topElement();
        removeFromHead();
        return item;
    }
    int front(){
        return headdata();
    }
    int back(){
        return taildata();
    }

    bool isempty() {
      return isEmpty();
    }
};

int main(){
    Queue queue;
    queue.enqueue(369);
    queue.enqueue(36);
    queue.enqueue(69);
    queue.enqueue(143);

    cout << "Front element of queue: " << queue.front() << endl;
    cout << "Back element of queue: " << queue.back() << endl;
    cout << "Dequeued element from queue: " << queue.dequeue() << endl;
    cout << "Is queue empty? " << (queue.isempty() ? "Yes" : "No") << endl;
    return 0;
}
