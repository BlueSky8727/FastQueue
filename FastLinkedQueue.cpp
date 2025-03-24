#include <iostream>
#include "FastLinkedQueue.h"
using namespace std;

ChainNode::ChainNode(int d) {
    data = d;
    next = nullptr;
}

FastLinkedQueue::FastLinkedQueue() {
    frontNode = rearNode = nullptr;
}

FastLinkedQueue::~FastLinkedQueue() {
    while (!isEmpty()) {
        deQueue();
    }
}

void FastLinkedQueue::enQueue(int value) {
    ChainNode* newNode = new ChainNode(value);
    if (rearNode == nullptr) {
        frontNode = rearNode = newNode;
    } else {
        rearNode->next = newNode;
        rearNode = newNode;
    }
}

int FastLinkedQueue::deQueue() {
    if (frontNode == nullptr) {
        cout << "Queue is empty.\n";
        return -1;
    }
    int value = frontNode->data;
    ChainNode* temp = frontNode;
    frontNode = frontNode->next;
    if (frontNode == nullptr) rearNode = nullptr;
    delete temp;
    return value;
}

int FastLinkedQueue::front() {
    if (frontNode == nullptr) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return frontNode->data;
}

int FastLinkedQueue::rear() {
    if (rearNode == nullptr) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return rearNode->data;
}

bool FastLinkedQueue::isEmpty() {
    return frontNode == nullptr;
}