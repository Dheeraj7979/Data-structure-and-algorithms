#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr1[]={1,3,5,7,7,9,11};
     int arr2[]={1,2,3,4,5,5,6,6,7,8,11};
     // brute force 
     vector<int> temp;
          int visited=0;
     for(int i=0;i<sizeof(arr1)/4;i++){

          for(int j=0;j<sizeof(arr2)/4;j++){
               if(arr1[i]==arr2[j]){ 
                    temp.push_back(arr1[i]);
                    break; 
               } 
          }
     }
     for(auto num: temp){
          cout<<num<<"       ";
     }
     return 0;
}