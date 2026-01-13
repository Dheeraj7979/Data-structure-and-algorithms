// find the union of two sorted array elements may be repeated so this long code is written 
#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr1[]={1,2,2,2,2,2,2,4,5};
     int arr2[]={2,5,6,7};
     int n1=sizeof(arr1)/4;
     int n2=sizeof(arr2)/4;
     int i=0;
     int j=0;
     vector<int>temp;
     if(arr1[i]<arr2[j]){
          temp.push_back(arr1[i]);
          i++;
     } else if(arr2[j]<arr1[i]){
          temp.push_back(arr2[j]); j++;
     } else{
          temp.push_back(arr1[i]);
          i++;
          j++;
     }
     while(i<n1 && j<n2){
          if(temp.back()==arr1[i]) {
               i++;
          } else if(temp.back()==arr2[j]){
               j++;
          }
          else{
          if(arr1[i]==arr2[j]){
               temp.push_back(arr1[i]);
               i++;
               j++;
          } else if(arr1[i]<arr2[j]){
               temp.push_back(arr1[i]);
               i++;
          } else {
               temp.push_back(arr2[j]);
               j++;
          }
     }
}
     while(i<n1){
          temp.push_back(arr1[i]);
          i++;
     }
     while(j<n2){
          temp.push_back(arr2[j]);
          j++;
     }
     for(auto nums:temp){
          cout<<nums<<"       ";
     }
     return 0;
}