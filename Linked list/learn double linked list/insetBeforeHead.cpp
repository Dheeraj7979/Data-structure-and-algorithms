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
Node* insertbeforehead(Node* head,int val){
     Node* newelem=new Node(val,head,nullptr);
     head->back=newelem;
     return newelem;
}

Node* insertbeforetail(Node* head,int val){
     Node* temp=head;
     if(temp==NULL) {
          Node* newelem=new Node(val);
          return newelem;
     }
     if(temp->next==NULL){
          Node* newelem=new Node(val,head,nullptr);
          head->back=newelem;
          return newelem;
     }
     while(temp->next!=NULL){
          temp=temp->next;
     }
     Node* insertingelem=new Node(val);
     insertingelem->back=temp->back;
     insertingelem->next=temp;
     temp->back->next=insertingelem;
     return head;
}

Node* insertbeforek(Node* head,int val,int k){
     Node* temp=head;
     int cnt=0;
     if(temp==NULL) return new Node(val);
     if(temp->next==NULL|| k==1) {
          Node* newelem=new Node(val,temp,nullptr);
          temp->back=newelem;
          return newelem;
     }
     while(temp->next!=NULL){
          cnt++;
          if(cnt==k){
               Node* prev=temp->back;
               Node* addelem=new Node(val,temp,prev);
               prev->next=addelem;
               temp->back=addelem;
          }
          temp=temp->next;
     }
     return head;

}

int main(){
     vector<int>arr={1,2,3,4,5,6,7,8,9,10};
     int val=25;
     int k=1;
     Node* head = copyelem(arr);
     head= insertbeforek(head,val,k);

     Node* traverse=head;
     while(traverse!=NULL){
          cout<<traverse->data<<" ";
          traverse=traverse->next;
     }

     return 0;
}