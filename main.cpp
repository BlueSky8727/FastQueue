#include <iostream>
#include <limits>
#include "FastArrayQueue.h"
#include "FastLinkedQueue.h"
using namespace std;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getMenuInput(int minOption, int maxOption) {
    int choice;
    cin >> choice;

    if (cin.fail() || choice < minOption || choice > maxOption) {
        clearInput();
        cout << "Invalid input Please enter a number " << minOption << "-" << maxOption << ".\n";
        return -1;
    }
    return choice;
}

void menuArrayQueue() {
    FastArrayQueue queue;
    int choice, value;
    do {
        cout << "\n=== FastArrayQueue Menu ===\n";
        cout << "1. Enqueue (Add data)\n";
        cout << "2. Dequeue (Remove data)\n";
        cout << "3. Front (Peek first value)\n";
        cout << "4. Rear (Peek last value)\n";
        cout << "5. Display (Show all data)\n"; // ✅ เมนู display
        cout << "0. Back to Main Menu\n";
        cout << "Select >> ";

        choice = getMenuInput(0, 5);
        if (choice == -1) continue;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                if (cin.fail()) {
                    clearInput();
                    cout << "Invalid value!\n";
                } else {
                    queue.enQueue(value);
                }
                break;
            case 2:
                cout << "Dequeued value: " << queue.deQueue() << "\n";
                break;
            case 3:
                cout << "Front value: " << queue.front() << "\n";
                break;
            case 4:
                cout << "Rear value: " << queue.rear() << "\n";
                break;
            case 5:
                queue.display();
                break;
            case 0:
                cout << "Returning to main menu\n";
                break;
        }
    } while (choice != 0);
}

void menuLinkedQueue() {
    FastLinkedQueue queue;
    int choice, value;
    do {
        cout << "\n=== FastLinkedQueue Menu ===\n";
        cout << "1. Enqueue (Add data)\n";
        cout << "2. Dequeue (Remove data)\n";
        cout << "3. Front (Peek first value)\n";
        cout << "4. Rear (Peek last value)\n";
        cout << "5. Display (Show all data)\n"; // ✅ เมนู display
        cout << "0. Back to Main Menu\n";
        cout << "Select >> ";

        choice = getMenuInput(0, 5);
        if (choice == -1) continue;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                if (cin.fail()) {
                    clearInput();
                    cout << "Invalid value!\n";
                } else {
                    queue.enQueue(value);
                }
                break;
            case 2:
                cout << "Dequeued value: " << queue.deQueue() << "\n";
                break;
            case 3:
                cout << "Front value: " << queue.front() << "\n";
                break;
            case 4:
                cout << "Rear value: " << queue.rear() << "\n";
                break;
            case 5:
                queue.display();
                break;
            case 0:
                cout << "Returning to main menu...\n";
                break;
        }
    } while (choice != 0);
}

int main() {
    int choice;
    do {
        cout << "\n===== Queue System Menu =====\n";
        cout << "1. Use FastArrayQueue\n";
        cout << "2. Use FastLinkedQueue\n";
        cout << "0. Exit program\n";
        cout << "Select >> ";

        choice = getMenuInput(0, 2);
        if (choice == -1) continue;

        switch (choice) {
            case 1:
                menuArrayQueue();
                break;
            case 2:
                menuLinkedQueue();
                break;
            case 0:
                cout << "Exiting program\n";
                break;
        }

    } while (choice != 0);

    return 0;
}