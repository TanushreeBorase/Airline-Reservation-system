#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

