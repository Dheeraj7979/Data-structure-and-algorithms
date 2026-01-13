// check if the array is sorted  

#include<bits/stdc++.h>
using namespace std;
int main(){
     int array[]={2,1,3,7,88,9,6,5,5,2,11,6,3,0};
     int array2[]={1,2,3,4,5};
     int count=0;
     for(int i=0;i<sizeof(array2)/4-1;i++){
          if(array2[i]>array2[i+1]){
               count++;
          }
     }
     if(count==0) cout<<"sorted";
     else cout<<"not sorted";

     return 0;
}