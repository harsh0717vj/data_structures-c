#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Check if the stack is full (memory allocation check)
int isFull(struct Node* top) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
        return 1;
    else {
        free(p); // free the test node
        return 0;
    }
}

// Push operation
struct Node* push(struct Node* top, int x) {
    if (isFull(top)) {
        printf("Stack is Overflowed\n");
        return top;  // return current top
    } 
    else {
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflowed\n");
        return -1;
    }
    else{
        struct Node* n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
}
// Display the stack
void traverse(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}


// Main function
int main() {
    struct Node* top = NULL;

    // Corrected function call syntax
    top = push(top, 78);
    top = push(top, 45);
    top = push(top, 23);
    int element=pop(&top);
    printf("Popped element is %d",element);
    printf("Stack elements:\n");
    traverse(top);
    printf("Popped element is %d\n",element);
    traverse(top);
    return 0;
}
