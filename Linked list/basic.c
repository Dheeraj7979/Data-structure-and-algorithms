#include<stdio.h>
#include<stdlib.h>


struct Node{
     int data;
     struct Node* next;
};

void linkedlistTraversel(struct Node *ptr){
     while(ptr!=NULL){
          printf("%d\n",ptr->data);
          // printf("%d\n",ptr->next); gives address value 
          ptr=ptr->next;
     }
}


int main(){
     struct Node *head;
     struct Node *second;
     struct Node *third;
     head=(struct Node *) malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));


     // link first and second node: 
     head->data=5;
     head->next=second;
     // link second and third node :; 
     second->data=9;
     second->next=third;
     // terminate at third with null : 
     third->data=58;
     third->next=NULL;

     

     //print the values: 
     linkedlistTraversel(head);

     return 0;
}