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

Node* deleteElem(Node* head,int k){
     if(k==1){
          Node* temp=head;
          head=head->next;
          delete temp;
          return head;
     }
     int cnt=0;
     Node* temp=head;
     Node* prev=NULL;
     while(temp!=NULL){
          cnt++;
          if(cnt==k){
               prev->next=prev->next->next;
               free(temp);
               break;
          }
          prev=temp;
          temp=temp->next;
     }
     
     return head;
}


int main(){
 
     vector<int>givenelem={1,3,5,7,9,11,13,15};
     Node* head= convertoLL(givenelem);
     int k=10;
    Node* traverse= deleteElem(head,k);

     while(traverse!=NULL){
          cout<<traverse->data<<"      ";
          traverse=traverse->next;
          
     }
     return 0;
}