🚂 Railway Ticket Booking System

A simple C program to manage railway ticket booking, viewing, searching, and cancellation using a modular approach with multiple files. Perfect for C programming practice and beginner-level projects.

📁 Project Structure
Railway-Ticket-Booking-System/
│
├── main.c        # Main menu and program execution
├── ticket.c      # Functions to book, view, search, cancel tickets
├── ticket.h      # Ticket structure and function declarations
├── utils.c       # Utility functions (currently placeholder)
├── utils.h       # Standard library includes and utility declarations
└── README.md     # Project documentation

🛠 Features

Book Tickets – Input passenger details (Name, Age, From, To)

View All Tickets – Display all booked tickets

Search Ticket – Find a ticket by ticket number

Cancel Ticket – Cancel a ticket by ticket number

Exit Program – Graceful exit

💻 How to Compile & Run

Open a terminal and navigate to the project directory.

Compile using GCC:

gcc main.c ticket.c utils.c -o railway


Run the program:

./railway

📌 Usage

Choose an option from the menu:

1. Book Ticket
2. View All Tickets
3. Search Ticket
4. Cancel Ticket
5. Exit


Follow the prompts for inputting passenger information.

Tickets are managed in memory (temporary storage).

⚠️ Note: Currently, tickets are not saved to a file. Closing the program will clear all booked tickets.

📝 Future Enhancements

Add file handling to save tickets permanently.

Add seat numbers and train names.

Include date and time for tickets.

Improve user interface and validations.

🧑‍💻 Author

Lakshya Kanodia
B.Tech Student | Batch 53 | SAP ID: 590027644
