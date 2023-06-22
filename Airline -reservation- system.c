#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // provides a method to represent and manipulate boolean values, indicating whether a condition is true or false

#define MAX_SEATS 10

typedef struct 
{
    char name[50];
    bool reserved;
} Seat;


Seat seats[MAX_SEATS];

void initializeSeats()
{
    for (int i = 0; i < MAX_SEATS; i++)
        {
        seats[i].reserved = false;
        }
}

//The displaySeats function displays  whether the seat is available or reserved

void displaySeats()
{
    printf("Seat\tStatus\n");
     for (int i = 0; i < MAX_SEATS; i++) 
     {
        printf("%d\t%s\n", i + 1, seats[i].reserved ? "Reserved" : "Available");
    }
}

// The reserveSeat function prompts the user to enter a seat number and check if the seat is available
// If the seat is available, it asks for the passenger's name and reserves the seat

void reserveSeat() 
{
    int seatNumber;

    printf("Enter the seat number you want to reserve: ");
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > MAX_SEATS)
    {
        printf("Invalid seat number.\n");
        return;
    }

    if (seats[seatNumber - 1].reserved) 
    {
        printf("Seat already reserved.\n");
    } else {
    
