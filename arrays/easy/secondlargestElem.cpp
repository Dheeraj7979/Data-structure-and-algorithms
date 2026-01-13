// find the second largest element in an array 

#include<bits/stdc++.h>
using namespace std;
int main(){
     int array[]={2,1,3,7,88,9,6,5,5,2,11,6,3,0};
     int largest=0;
     for(int i=0;i<sizeof(array)/4;i++){
          if(largest<array[i]){
               largest=array[i];
          }
     }
     int secondlargest=0;
     for(int i=0;i<sizeof(array)/4;i++){
          if(secondlargest<array[i]){
               if(array[i]!=largest){
               secondlargest=array[i];
          } }
     }
     cout<<secondlargest;

     return 0;
}