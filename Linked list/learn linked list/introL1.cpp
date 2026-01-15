#include<bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     Node* next;

     public:
     Node(int data1,Node* next1){
          data=data1;
          next=next1;
     }
     public:
     Node(int data1){
          data=data1;
          next=nullptr;
     }
};
Node* convertArr2LL(vector<int>&arr){
     Node* head=new Node(arr[0]);
     Node* mover=head;
     for(int i=1;i<arr.size();i++){
          Node* temp=new Node(arr[i]);
          mover->next=temp;
          mover=temp;
     }
     return head;
}

int main(){
      
     // Node* head=new Node(5,nullptr);
     // Node* second=new Node(6);
     // Node* mover=head;
     // mover->next=second;
     // cout<<head->data<<endl<<head->next<<endl;
     // cout<<second->data;

     vector<int>arr={1,3,5,7,9,11,13};
     Node* head =convertArr2LL(arr);
     // cout<<head->data;
     Node* temp=head;
     while(temp->next!=NULL){
          cout<<temp->data<<" ";
          cout<<temp->next<<endl;
          temp=temp->next;
     }
      
   
     return 0;
}    