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
     Node* traverse=head;
     while(traverse!=NULL){
          cout<<traverse->data<<" ";
          traverse=traverse->next;
     }
     return head;
}
int main(){
     vector<int>arr={1,2,3,4,5,6,7,8,9,10};
     copyelem(arr);
     return 0;
}