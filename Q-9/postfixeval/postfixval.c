#include <stdio.h>
#include "postfixval.h"

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}
