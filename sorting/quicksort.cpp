#include<bits/stdc++.h>
using namespace std;

int psort(int arr[],int low, int high){
     int i=low;
     int j=high;
     int pivot=arr[low];

     while(i<j){
          
     while(pivot>=arr[i] && i<=high-1){
          i++;
     } 
     while(pivot<arr[j] && j>=low+1){
          j--;
     }

     if(i<j) swap(arr[i],arr[j]); 
}
     swap(arr[low],arr[j]);
          return j;
}
void quicksort(int arr[],int low,int high){
     if(low<high){
          int pivot=psort(arr,low,high);
          quicksort(arr,low,pivot-1);
          quicksort(arr,pivot+1,high);
     } 
}
int main(){
     int arr[]={2,4,5,9,7,8,5,4,2,1,0,3,5,9};
     int low=0;
     int high=sizeof(arr)/4-1;
     quicksort(arr,low,high);
     for(int i=0;i<=high;i++){
          cout<<arr[i]<<"     ";
     }

     return 0;
}

