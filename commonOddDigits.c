#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push (int stack[], int value) {
    stack[++top] = value;
}

int pop (int stack[]) {
    if (top != -1) {
        int value = stack[top];
        top-=1;
        return value;
    }
}

int isEmpty () {
    return top == -1 ? 1 : 0;
}

int main()
{
    int x, y;
    scanf ("%d %d", &x, &y);
    int stack[10001];
    while (x != 0 && y != 0) {
        int r1 = x % 10, r2 = y % 10;
        x/=10;
        y/=10;
        if (r1 == r2) {
            if (r1 % 2 != 0)
            push (stack, r1);
        }
    }
    while (!isEmpty()) {
        printf ("%d", pop(stack));
    }
    return 0;
}