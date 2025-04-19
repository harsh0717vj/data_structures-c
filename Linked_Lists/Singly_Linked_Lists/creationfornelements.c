#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void traverse(struct Node*ptr){
    while(ptr!=NULL){
        printf("Elements: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int size;
    printf("Enter size of the link:");
    scanf("%d",&size);
    struct Node*head=NULL;
    struct Node*temp=NULL;
    for(int i=1;i<=size;i++){
        struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
        if(newNode==NULL){
            printf("Memory allocation failed\n");
        }
        printf("Enter data for node %d: ",i);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
        
    }
    printf("Linked List: \n");
    traverse(head);
    return 0;
}
