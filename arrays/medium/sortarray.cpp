// Sort an array containing only 1 2 and 0 >>>>.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// brute force approach through merge sort >..>>>
void merge(vector<int>&arr,int start,int mid,int end){
     int left=start;
     int right=mid+1;
     vector<int>temp;
     while(left<=mid && right<=end){
          if(arr[left]<=arr[right]){
          temp.push_back(arr[left]);
          left++;
          } else{
               temp.push_back(arr[right]);
               right++;
          }
     } 
     while(left<=mid){
          temp.push_back(arr[left]);
          left++;
     }
     while(right<=end){
          temp.push_back(arr[right]);
               right++;
     }
     for(auto elem:temp){
          arr[start]=elem;
          start++;
     }
}
void mergesort(vector<int>&arr,int start,int end){
     if(start>=end) return ;
    int  mid=(start+end)/2;
     mergesort(arr,start,mid);
     mergesort(arr,mid+1,end);
     merge(arr,start,mid,end);

}


// <<>> NOW APPLYING BETTER ONE
 void sortbyhash(vector<int>&arr){
vector<int>hash(3,0);
for(auto it: arr){
     hash[it]++;
}
int j=0;
for(int i=0;i<hash[0];i++){
     arr[j]=0;
     j++;
}
for(int i=0;i<hash[1];i++){
     arr[j]=1;
     j++;
}
for(int i=0;i<hash[2];i++){
     arr[j]=2;
     j++;
}

}
// most optimal Dutch national flag algorithm 
void optimal(vector<int>&arr){
     int n=arr.size();
     int low=0;
     int high=n-1;
     int mid=0;
     while(mid<=high){
          if(arr[mid]==0){
               swap(arr[mid],arr[low]);
               low++;
               mid++;
          } else if(arr[mid]==1) mid++;
          else {
               swap(arr[mid],arr[high]);
               high--;
          }
     }
}

int main(){
     vector<int>arr={2,0,1,1,1,2,0,1,2,2,2,0,1,2,0,1,2,0,0,0,0,0,1,2,1,2,0,1,2,0,1,0,0,0,0,0,0};
     int last=arr.size()-1;
     // mergesort(arr,0,last);
     // sortbyhash(arr);
     

     optimal(arr);
     for(auto elem:arr){
          cout<<elem<<"  ";
     }
     return 0;
}