#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

int main(int argc, char *argv[])
{
    queue *q = queue_create(sizeof(int));
    
    int val;
    for (val=0; val< 6; val++) {
        queue_push(q, &val);
    }
    
    while (!queue_empty(q)) {
        queue_front(q, &val);
        queue_pop(q);
        printf("This just popped: %d\n", val);
    }
    queue_destroy(q);
    
    return 0;
}

