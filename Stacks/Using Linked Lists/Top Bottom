#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1) { // Corrected comparison using '=='
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(struct stack *ptr) {
    if (ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void push(struct stack *ptr, int val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d into the stack\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i) {
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0) {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    return sp->arr[arrayInd];
}

int stackTop(struct stack *sp) {
    return sp->arr[sp->top];
}

int stackBottom(struct stack *sp) {
    return sp->arr[0];
}

int main() {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 11;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack successfully created!\n");

    printf("Stack before pushing, Full: %d\n", isFull(sp));
    printf("Stack before pushing, Empty: %d\n", isEmpty(sp));

    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);

    for (int j = 1; j <= sp->top + 1; j++) {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    printf("The topmost value of the stack is: %d\n", stackTop(sp));
    printf("The bottommost value of the stack is: %d\n", stackBottom(sp));

    return 0;
}
