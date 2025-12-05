#ifndef TICKET_H
#define TICKET_H

struct Ticket
{
    int ticketNo;
    char name[50];
    int age;
    char from[30];
    char to[30];
};

void bookTicket();
void viewTickets();
void searchTicket();
void cancelTicket();

#endif
