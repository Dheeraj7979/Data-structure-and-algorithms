#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&array,int target){
     int low=0;
     int high=array.size()-1;
     int mid;
     while(low<=high){
          mid=(low+high)/2;
          if(array[mid]==target) return 1;
          else if(array[mid]>target) high=mid-1;
          else low=mid+1;
     }
     return -1; 
}

// Through recursion 
 void binarysearchrecursion(vector<int>&array,int low,int high,int target){
          if(low>high) {
               cout<<"not found";
               return ;
          }
         int  mid=(low+high)/2;
          if(array[mid]<target) binarysearchrecursion(array,mid+1,high,target);
          else  if (array[mid]>target) binarysearchrecursion(array,low,mid-1,target);
          else if(array[mid]==target) cout<<target<<" is present";
          return;
 }

int main(){
     vector<int> array={1,2,3,4,6,7,9,12,13,16,17};
     int target=4;
     // cout<<binarysearch(array,4);
     int high=array.size()-1;
     binarysearchrecursion(array,0,high,7);


     return 0;
}