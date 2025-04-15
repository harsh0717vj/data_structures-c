#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* ptr,int val){
    if(isfull(ptr)){
        printf("Stack overflowed! Cannot push %d to the Stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){
    if(isempty(ptr)){
        printf("Stack Underflowed! Cannot pop from the Stack\n");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    printf("Stack has been successfully created\n");
    printf("Before pushing, Full: %d\n",isfull(sp));
    printf("Before pushing,Empty: %d\n",isempty(sp));
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,6);//-->Pushed 10 Values to the stack.
    push(sp,516);//-->Stack Overflowed.
    printf("After pushing,Full: %d\n",isfull(sp));
    printf("After pushing, Empty: %d\n",isempty(sp));
    printf("Popped %d from the Stack\n",pop(sp));
    return 0;
}
