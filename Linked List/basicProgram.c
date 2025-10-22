#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void createList(){
    struct node *new,*temp;
    int choice;
    do
    {
        new = (struct node *) malloc(sizeof(struct node));
        printf("Enter the number : ");
        scanf("%d",&new->data);
        new->next = NULL;
        if (head==NULL)
        {
            head = temp = new;
        }
        else{
            temp->next = new;
            temp = temp->next;
        }
        printf("to add one more node? (press 1) : ");
        scanf("%d",&choice);
        
    } while (choice==1);
    
}
void displayList(struct node *head){
    struct node *temp = head;
    printf("Linked list : ");
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    
}
int main(){
    createList();
    displayList(head);
    return 0;
}