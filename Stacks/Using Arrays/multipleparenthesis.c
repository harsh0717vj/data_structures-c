#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1) return 1;
    else return 0;
}
int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1) return 1;
    else return 0;
}
void push(struct stack*ptr,char val){
    if(isFull(ptr)) printf("Stack Overflowed!\n");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflowed!\n");
        return -1;
}
else{
    char val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
}
int parenthesisMatching(char*exp){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    printf("Enter size of the stack: ");
    scanf("%d",&sp->size);
    sp->top = -1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='('){
            push(sp,exp[i]);
        }
    else if(exp[i]==']'||exp[i]=='}'||exp[i]==')'){
            if(isEmpty(sp)) return 0;
            else pop(sp);
        }
}
    return isEmpty(sp);
}
int main(){
    char exp[100];
    printf("Enter the expression: ");
    scanf("%s",exp);
    if(parenthesisMatching(exp)) printf("Expression is Balanced\n");
    else printf("Expression is Unbalanced\n");
    return 0;
}
