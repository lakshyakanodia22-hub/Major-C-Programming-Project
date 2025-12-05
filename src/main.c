#include "ticket.h"
#include "utils.h"

int main()
{
    int choice;

    while (1)
    {
        printf("\n\n======== Railway Ticket Booking System ========");
        printf("\n1. Book Ticket");
        printf("\n2. View All Tickets");
        printf("\n3. Search Ticket");
        printf("\n4. Cancel Ticket");
        printf("\n5. Exit");
        printf("\n==============================================");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bookTicket();
            break;

        case 2:
            viewTickets();
            break;

        case 3:
            searchTicket();
            break;

        case 4:
            cancelTicket();
            break;

        case 5:
            printf("\nThank You for Using Railway Booking System!");
            exit(0);

        default:
            printf("\n❌ Invalid Choice! Try again.");
        }
    }

    return 0;
}
