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
Node* addhead(Node* head,int k){
     // Node* temp=new Node(k);
     // temp->next=head;
     // return temp;
     return new Node(k,head);
}

Node* inserttail(Node* head,int k){
     Node* temp=head;
     while(temp->next!=NULL){
          temp=temp->next;
     }
     Node* newelem=new Node(k,NULL);
     temp->next=newelem;
     return head;
}
     
int main(){
  
     vector<int>givenelem={1,3,5,7,9,11,13,15};
     Node* head= convertoLL(givenelem);
     int k=2;
     int k2=100;
     head=addhead(head,k);
     cout<<"head Elem:  " <<head->data<<" "<<"New Elem:-  "<<head->next->data<<endl;

     // inset at the last 
     head=inserttail(head,k2);
     Node* traverse=head;

     while(traverse!=NULL){
          cout<<traverse->data<<endl;
          traverse=traverse->next;
     }
}