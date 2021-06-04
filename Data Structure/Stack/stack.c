#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

void creatEmptyStack(st *s)
{
    s->top = -1;
}

int isFull(st *s)
{
    if(s->top == MAX-1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(st *s) {
    if(s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void pushStack(st *s, int newItem) {
    if(isFull(s)){
        printf("Stack is Full\n");
    } else {
        s->top++;
        s->items[s->top] = newItem;
    }
    count++;
}

void popStack(st *s) {
    if(isEmpty(s)){
        printf("Stack is Empty\n");
    } else {
        printf("item popped = %d\n", s->items[s->top]);
        s->top--;
    }
    count--;
}

void printStack(st *s) {
    printf("Stack: \n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", s->items[i]);
    }
}

int main () {
    int ch;

    st *s = (st *)malloc(sizeof(st));
    creatEmptyStack(s);

    pushStack(s,1);
    pushStack(s,4);
    pushStack(s,2);
    pushStack(s,8);
    pushStack(s,6);
    pushStack(s,15);
    pushStack(s,11);

    printStack(s);

    popStack(s);

    printf("After popping:\n");
    printStack(s);
}

