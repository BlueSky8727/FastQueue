# QMaster: Fast Queue Data Structure Simulator

> 🚀 A C++ project for simulating efficient queue data structures using both Array-based and Linked List-based implementations.

---

## 📌 Project Overview

**QMaster** is a console-based C++ program that demonstrates how to implement and manage queue operations efficiently. It supports two optimized structures:

- ✅ **FastArrayQueue** – circular array queue with fixed size, no shifting needed  
- ✅ **FastLinkedQueue** – pointer-based queue using internal `ChainNode`

This project was created as part of the course `CPE11267 - Programming with Applied Knowledge` at Sripatum University.

---

## 🧠 Features

- Interactive console menu system
- Supports:
  - `Enqueue` – add element to the rear
  - `Dequeue` – remove element from the front
  - `Front` – peek the first element
  - `Rear` – peek the last element
- Input validation (rejects invalid numbers or characters)
- Keeps running until user exits with `0`

---

## 📂 File Structure
QMaster/
├── FastArrayQueue.h        # Header for array-based queue
├── FastArrayQueue.cpp      # Implementation of array queue
├── FastLinkedQueue.h       # Header for linked-list-based queue
├── FastLinkedQueue.cpp     # Implementation of linked queue
├── main.cpp                # Main program with interactive menu
└── Makefile                # For compiling on Mac / Windows


---

## ⚙️ How to Compile & Run

### 🔧 On macOS / Linux / WSL
```bash
make        # Compile
./main      # Run program
make clean  # Clean build files

