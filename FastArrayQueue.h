#ifndef FAST_ARRAY_QUEUE_H
#define FAST_ARRAY_QUEUE_H

class FastArrayQueue {
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int frontIndex, rearIndex, count;

public:
    FastArrayQueue();
    void enQueue(int value);
    int deQueue();
    int front();
    int rear();
    bool isEmpty();
    void display(); 
};

#endif