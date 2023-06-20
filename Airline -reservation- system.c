#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SEATS 10

typedef struct {
    char name[50];
    bool reserved;
} Seat;