
 #include<bits/stdc++.h>
 using namespace std;

 
 int findPeakElement(vector<int>& nums) {
        int ans;
        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-2]<nums[nums.size()-1])  return nums.size()-1;
        int low=1;
        int high=nums.size()-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]&& nums[mid-1]<nums[mid]) {
                ans=mid;
                break;
            }
            if(nums[mid]>nums[mid+1]&& nums[mid]<nums[mid-1]) high=mid-1;
            else if(nums[mid]<nums[mid+1]&& nums[mid-1]<nums[mid]) low=mid+1;
            else low=mid+1;
            
        }
    return ans;
    }


    int main(){
     vector<int>nums={1,2,1,3,5,6,4};
     findPeakElement(nums);
    }