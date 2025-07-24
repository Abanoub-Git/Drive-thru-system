# Drive-thru-system

# 🚗 Drive-Thru Queue Management System

This is a console-based Drive-Thru simulation system developed in C++, designed to manage a queue of cars and process food and drink orders. The system replicates a real-world drive-thru experience by handling customer queuing, order placement, billing, and dynamic interaction with a text-based interface.

 🔧 Features

* Queue Management: Implements a queue using a singly linked list to manage the flow of cars.
* Ordering System: Customers can select from a menu of food and drinks, with prices and options handled via input.
* Payment and Discounts: Calculates total order cost and applies a 10% discount for orders over \$50.
* Dynamic Menu Interaction: Displays interactive menu options for multiple cars with the ability to modify orders.
* Car Tracking: Displays the number of cars in the queue before and after each order using a counter function.
* Simulation Flow: Handles queue operations (enqueue/dequeue), displays order summary, and manages car turnover.

 🧱 Structure

* `node` class: Represents each car in the queue.
* `DriveThruSystem` class: Handles all queue operations including enqueue, dequeue, and display.
* `menu()` function: Allows users to place and update orders while calculating cost.
* `main()` function: Simulates multiple car interactions with the system and processes orders in sequence.

 💻 Technologies Used

* Language: C++
* Data Structures: Linked List (Queue)

 📝 How It Works

1. The system enqueues multiple cars (each represented as a node).
2. Each car goes through the menu selection and payment process.
3. Orders are processed and discounted if applicable.
4. After each order, the car is dequeued, and the remaining number of cars is shown.
5. The system ends once all cars have been served.

 📌 Use Case

Ideal for demonstrating the use of data structures in real-life applications such as service queues, customer order processing, and basic transaction systems.

