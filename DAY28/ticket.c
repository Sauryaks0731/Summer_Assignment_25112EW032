#include <stdio.h>

int main()
{
    char name[30], from[30], to[30], date[15];
    int train, type, coach, tickets;
    float fare, total;

    printf("========== TRAIN TICKET BOOKING SYSTEM ==========\n\n");

    printf("Enter Passenger Name : ");
    scanf("%s", name);

    printf("Enter From Station : ");
    scanf("%s", from);

    printf("Enter To Station : ");
    scanf("%s", to);

    printf("Enter Journey Date (DD/MM/YYYY): ");
    scanf("%s", date);

    printf("\nSelect Train\n");
    printf("1. Vande Bharat Express (Delhi - Lucknow)\n");
    printf("2. Rajdhani Express (Delhi - Mumbai)\n");
    printf("3. Shatabdi Express (Delhi - Chandigarh)\n");
    printf("Enter Choice: ");
    scanf("%d", &train);

    printf("\nBooking Type\n");
    printf("1. General\n");
    printf("2. Tatkal\n");
    printf("Enter Choice: ");
    scanf("%d", &type);

    printf("\nCoach Class\n");
    printf("1. Sleeper (Rs.500)\n");
    printf("2. Economy (Rs.700)\n");
    printf("3. AC 3 Tier (Rs.1000)\n");
    printf("4. AC 2 Tier (Rs.1500)\n");
    printf("5. AC 1 Tier (Rs.2500)\n");
    printf("Enter Choice: ");
    scanf("%d", &coach);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    switch(coach)
    {
        case 1: fare = 500; break;
        case 2: fare = 700; break;
        case 3: fare = 1000; break;
        case 4: fare = 1500; break;
        case 5: fare = 2500; break;
        default:
            printf("Invalid Coach");
            return 0;
    }

    if(type == 2)
        fare = fare + 200;

    total = fare * tickets;

    printf("\n=========== TRAIN TICKET ===========\n");
    printf("Passenger Name : %s\n", name);
    printf("From Station   : %s\n", from);
    printf("To Station     : %s\n", to);
    printf("Journey Date   : %s\n", date);

    if(train == 1)
        printf("Train          : Vande Bharat Express\n");
    else if(train == 2)
        printf("Train          : Rajdhani Express\n");
    else if(train == 3)
        printf("Train          : Shatabdi Express\n");

    if(type == 1)
        printf("Booking Type   : General\n");
    else
        printf("Booking Type   : Tatkal\n");

    switch(coach)
    {
        case 1: printf("Coach          : Sleeper\n"); break;
        case 2: printf("Coach          : Economy\n"); break;
        case 3: printf("Coach          : AC 3 Tier\n"); break;
        case 4: printf("Coach          : AC 2 Tier\n"); break;
        case 5: printf("Coach          : AC 1 Tier\n"); break;
    }

    printf("Tickets        : %d\n", tickets);
    printf("Total Fare     : Rs. %.2f\n", total);
    printf("Booking Status : Confirmed\n");

    return 0;
}