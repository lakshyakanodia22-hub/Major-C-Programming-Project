#include "ticket.h"
#include "utils.h"

struct Ticket t[100];
int count = 0;
int ticketNumber = 1000;

void bookTicket()
{
    printf("\n----- Book Ticket -----\n");

    t[count].ticketNo = ticketNumber++;

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t[count].name);

    printf("Enter Age: ");
    scanf("%d", &t[count].age);

    printf("From: ");
    scanf(" %[^\n]", t[count].from);

    printf("To: ");
    scanf(" %[^\n]", t[count].to);

    count++;

    printf("\n✅ Ticket Booked Successfully!");
}

void viewTickets()
{
    int i;

    if (count == 0)
    {
        printf("\n❌ No tickets booked yet.\n");
        return;
    }

    printf("\n----- All Booked Tickets -----\n");

    for (i = 0; i < count; i++)
    {
        printf("\nTicket No: %d", t[i].ticketNo);
        printf("\nName: %s", t[i].name);
        printf("\nAge: %d", t[i].age);
        printf("\nFrom: %s", t[i].from);
        printf("\nTo: %s", t[i].to);
        printf("\n--------------------------");
    }
}

void searchTicket()
{
    int no, i, found = 0;

    printf("\nEnter Ticket Number to Search: ");
    scanf("%d", &no);

    for (i = 0; i < count; i++)
    {
        if (t[i].ticketNo == no)
        {
            printf("\n✅ Ticket Found!");
            printf("\nName: %s", t[i].name);
            printf("\nAge: %d", t[i].age);
            printf("\nFrom: %s", t[i].from);
            printf("\nTo: %s", t[i].to);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\n❌ Ticket Not Found!");
}

void cancelTicket()
{
    int no, i, j, found = 0;

    printf("\nEnter Ticket Number to Cancel: ");
    scanf("%d", &no);

    for (i = 0; i < count; i++)
    {
        if (t[i].ticketNo == no)
        {
            for (j = i; j < count - 1; j++)
            {
                t[j] = t[j + 1];
            }

            count--;
            found = 1;
            printf("\n✅ Ticket Cancelled Successfully!");
            break;
        }
    }

    if (found == 0)
        printf("\n❌ Ticket Not Found!");
}
