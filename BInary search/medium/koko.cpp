// KOKO EATING BANANA -> Returnn the min int K such that koko can eat all bananas within H hours; k is no. of banana koko eat in one bite 
#include<bits/stdc++.h>
using namespace std;

int bruteforce(int ar[],int h,int n){
     int sum=0;
     int htaken=0;
     int max=0;
     for(int i=0;i<n;i++) {
          if(max<ar[i]) max=ar[i];
     }
     
     int k=1;
     {
     for(int i=0;i<n;i++){
          if(ar[i]%k==0) htaken+=ar[i]/k;
          else htaken +=ar[i]/k+1;      
     }
     if(htaken>h){
           k++;
           htaken=0;
          } else{
               break;
          }
}
cout<<k;

}
int main(){
     int arr[]={25,12,8,14,19};
     int h=5;
     int n=sizeof(arr)/4;
     bruteforce(arr,h,n);
}