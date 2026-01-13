// rotate array by D places 
#include<bits/stdc++.h>
using namespace std;
 void reverse(int array[],int a,int b){
     int i=a;
     int j=b-1;
     while(i<j){
          swap(array[i],array[j]);
          i++;
          j--;
     }
 }
int main(){
     int array[]={1,2,3,4,5};
     int n=sizeof(array)/4;     
     int d;
     cin>>d;

     // Brute force approach >>>>>>
     // int n=sizeof(array)/4;
     // for(int i=1;i<=k%n;i++){
     //      for(int i=0;i<n-1;i++){
     //           swap(array[i],array[i+1]);
     //      }
     // }
     

     // optimal approach >>><<>>
     d=d%n;
     reverse(array,0,d);
     reverse(array,d,n);
     reverse(array,0,n);
     for(auto values: array){
          cout<<values<<"     ";
     }


     return 0;
}