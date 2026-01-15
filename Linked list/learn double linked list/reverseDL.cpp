#include"LL.cpp"
#include<bits/stdc++.h>
using namespace std;

Node* copyelem(vector<int>&arr){
     Node* head=new Node(arr[0]);
     Node* prev=head;
     for(int i=1;i<arr.size();i++){
          Node* temp=new Node(arr[i],nullptr,prev);
          prev->next=temp;
          prev=temp;
          temp=temp->next;
     }
    
     return head;
}


Node* reverse(Node* head){
     Node* temp=head;
     Node* prev=NULL;
     while(head->next!=NULL){
          temp=head->next;
          head->next=prev;
          head->back=head->next;
          prev=head;
          head=temp;
     }
     head->next=prev;
     temp->back=NULL;
     return head; 
}

int main(){
     vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    Node* head= copyelem(arr);
      
    head=reverse(head);
     Node* traverse=head;
     while(traverse!=NULL){
     cout<<traverse->data<<"  ";
     traverse=traverse->next;
    }
     return 0;
}