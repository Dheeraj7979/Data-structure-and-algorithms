// Search element in rotated array with unique elements 
#include<bits/stdc++.h>
using namespace std;

int searchelem(vector<int> nums,int target){
int low=0;
     int high=nums.size()-1;
     while(low<=high){
          int mid=(low+high)/2;
          if(nums[mid]==target) return target;
          if(nums[low]<=nums[mid]){
               if(nums[low]<=target && target<=nums[mid]) high=mid-1;
               else low=mid+1;
          } else{
               if(nums[mid]<=target && target<=nums[high]) low=mid+1;
               else high=mid-1;
          }
     }
     return -1;
}

          // repeated in rotated array with same elements and different elements 
       int   searchElem(vector<int>nums, int target){

          }
int main(){
     vector<int> nums={4,5,6,7,0,1,2};
     int target=0;
     cout<<searchelem(nums,target);
     return 0;
}