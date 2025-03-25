#ifndef FAST_LINKED_QUEUE_H
#define FAST_LINKED_QUEUE_H

struct ChainNode {
    int data;
    ChainNode* next;
    ChainNode(int d);
};

class FastLinkedQueue {
private:
    ChainNode* frontNode;
    ChainNode* rearNode;

public:
    FastLinkedQueue();
    ~FastLinkedQueue();
    void enQueue(int value);
    int deQueue();
    int front();
    int rear();
    bool isEmpty();
    void display();
};

#endif