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

//The displaySeats function displays  whether seat is available or reserved


