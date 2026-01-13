#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>&nums,int target){
     int low=0;
     int n=nums.size()-1;
     int high=n-1;
     int ans=n;
     while(low<=high){
          int mid=(low+high)/2;
          if(nums[mid]>=target) high=mid-1;
          if(nums[mid]<target) low=mid+1;

     }
     return low;
}
int main(){
     vector<int>nums={0,2,5,6,7,7,9,15,17,19,21};
     int target=8;
     cout<<lowerbound(nums,target);
}