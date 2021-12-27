#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv[])
{
    stack *s = stack_create(sizeof(int));
    
    int val;
    for (val=0; val< 6; val++) {
        stack_push(s, &val);
    }
    
    while (!stack_empty(s)) {
        stack_top(s, &val);
        stack_pop(s);
        printf("This just popped: %d\n", val);
    }
    stack_destroy(s);
    
    return 0;
}

