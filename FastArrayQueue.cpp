#include <iostream>
#include "FastArrayQueue.h"
using namespace std;

FastArrayQueue::FastArrayQueue() {
    frontIndex = 0;
    rearIndex = -1;
    count = 0;
}

void FastArrayQueue::enQueue(int value) {
    if (count == MAX_SIZE) {
        cout << "Queue is full.\n";
        return;
    }
    rearIndex = (rearIndex + 1) % MAX_SIZE;
    data[rearIndex] = value;
    count++;
}

int FastArrayQueue::deQueue() {
    if (count == 0) {
        cout << "Queue is empty.\n";
        return -1;
    }
    int value = data[frontIndex];
    frontIndex = (frontIndex + 1) % MAX_SIZE;
    count--;
    return value;
}

int FastArrayQueue::front() {
    if (count == 0) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return data[frontIndex];
}

int FastArrayQueue::rear() {
    if (count == 0) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return data[rearIndex];
}

bool FastArrayQueue::isEmpty() {
    return count == 0;
}

void FastArrayQueue::display() {
    if (count == 0) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue contents: ";
    for (int i = 0; i < count; ++i) {
        int index = (frontIndex + i) % MAX_SIZE;
        cout << data[index] << " ";
    }
    cout << "\n";
}