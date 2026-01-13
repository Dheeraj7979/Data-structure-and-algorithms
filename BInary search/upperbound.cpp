  #include<bits/stdc++.h>
  using namespace std;
  
  
  
  int upperBound(vector<int> &nums, int x){
           int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<=x) low=mid+1;
            else high=mid-1; 

        }
        return high;
    }
    
int main(){
     vector<int>nums={3,5,8,9,15,19};
     int x=9;
     cout<<upperBound(nums,x);
}