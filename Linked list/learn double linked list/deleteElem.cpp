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

Node* deleteAtIndex(Node* head,int k){
     if(head==NULL|| head->next==NULL) return NULL;
     if(k==1){
          Node* temp=head;
          head->next->back=NULL;
          delete temp;
          return head;
     }
     Node* temp=head;
     Node* prev=NULL;
     int cnt=0;
     while(temp!=NULL){
          cnt++;
          if(cnt==k){   
               Node* nextelem=temp->next;
               nextelem->back=prev;
               prev->next=nextelem;
               delete temp;
               break;
          }
          prev=temp;
          temp=temp->next;
          
     }
     return head;    
}
Node* deletevalue(Node* head,int val){
     Node* temp=head;
     while(temp!=NULL){
          
          if(temp->data==val){

               if(temp->back==NULL) {
                    temp->next->back=NULL;
                    head=head->next;
                    delete temp;
                    break;
               }
               if(temp->next==NULL){
                    temp->back->next=NULL;
                    delete temp;
                    break;
               }
               Node* prev=temp->back;
               Node* after=temp->next;
               prev->next=after;
               after->back=prev;
               delete temp;
               break;
          }
          temp=temp->next;
     }
     return head;
}
int main(){
     vector<int>arr={1,2,3,4,5,6,7,8,9,10};
     Node* head=copyelem(arr);
     int k=3;
     int val=1;
     head=deleteAtIndex(head,k);
     head=deletevalue(head,val);

     Node* traverse=head;
     
     while(traverse!=NULL){
          cout<<traverse->data<<" ";
          traverse=traverse->next;
     }
     return 0;
}