#include"LL.cpp"
#include<bits/stdc++.h>
using namespace std;

Node* convertoLL(vector<int>&arr){
     Node* head=new Node(arr[0]);
     Node* mover=head;
     for(int i=1;i<arr.size();i++){
          Node* temp=new Node(arr[i]);
          mover->next=temp;
          mover=temp;
     }
     return head;
}

Node* reverse(Node* head){
     Node* temp=head;
     Node* prev=NULL;
     while(head->next!=NULL){
          temp=head->next;
          head->next=prev;
          prev=head;
          head=temp;
     }
     head->next=prev;
     return head;
     
}

int main(){

     
     vector<int>givenelem={1,3,5,7,9,11,13,15};
     Node* head= convertoLL(givenelem);
     Node* reversehead=reverse(head);
     while(reversehead!=NULL){
          cout<<reversehead->data<<"     ";
          reversehead=reversehead->next;
     }
}