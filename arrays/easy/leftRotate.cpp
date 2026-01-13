// Left rotate an array by 1 place 
#include<bits/stdc++.h>
using namespace std;
int main(){
     int array[]={1,2,3,4,5};
     int n=sizeof(array)/4;
     for(int i=0;i<n-1;i++){
          swap(array[i],array[i+1]);
     }
     for(auto nums: array){
          cout<<nums<<"  ";
     }
}