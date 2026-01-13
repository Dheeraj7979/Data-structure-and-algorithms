// Move all zeros to end and remaining elements should be in their previous order 

#include<bits/stdc++.h>
using namespace std;
int main(){
     int array[]={0,1,2,0,3,4,5,6,0,0,0,0,7,8,0,9};
      int n=sizeof(array)/4;
     // int temp[n];
    
     // Better  force solution >><><><>>> T.C== O(3N); and space o(N);
     // int j=0;
          // for(int i=0;i<n;i++){
          //      if(array[i]!=0){
          //           temp[j]=array[i];
          //           j++;
          //      }
          // }
          // for(int i=0;i<n;i++){
          //      if(array[i]==0) {
          //      temp[j]=array[i];
          //      j++;
          //      }
          // }
          // for(auto values: temp){
          //      cout<<values<<"     ";
          // }

          // better aproach WITH T.C .= O(N);  ...
               // int i=0;
               // int left=0;
               // int right =n-1;
               // int temp[n];
               // while(left<=right){
               //      if(array[i]!=0){
               //           temp[left]=array[i];
               //           left++;
               //      } else{
               //           temp[right]=array[i];
               //           right--;
               //      }
               //      i++;
               // }
               // for(auto values: temp){
               //      cout<<values<<"  ";
               // }


               // optimal one 
               int j=-1;
               for(int i=0;i<n;i++){
                    if(array[i]==0){
                         j=i;
                         
                         break;
                    }
               }
               if(j!=-1) {

               for(int i=j+1;i<n;i++){
                    if(array[i]!=0){
                         swap(array[i],array[j]);
                         j++;
                    }
               }
          }
               for(auto value: array){
                    cout<<value<<"      ";
               }


     return 0;
}