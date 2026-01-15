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

Node* deletehead(Node* head){
     Node* temp=head;
     head=head->next;
     delete temp;
     return head;
}

int main(){

     
     vector<int>givenelem={1,3,5,7,9,11,13,15};
     int elem=10;
     Node* head= convertoLL(givenelem);
     Node* deletedLLhead=deletehead(head);
     cout<<deletedLLhead->data;
}