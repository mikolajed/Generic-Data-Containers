#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

int main(int argc, char *argv[]) 
{
    int val;
    vector *v = vector_create(sizeof(int));
    for (val = 0; val < 6; val++) 
        vector_push(v, &val);

    while (!vector_empty(v)) {
        vector_back(v, &val);
        vector_pop(v);
        printf("This just popped: %d\n", val);
    }
    vector_destroy(v);
}
