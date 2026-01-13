#include<bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int>& nums) {
        bool isbiggest=true;
        if(nums.size()!=1){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) isbiggest=false;
        }
        if(isbiggest){
            sort(nums.begin(),nums.end());
        } else{
        int r=nums.size()-1;
        int index=0;
        while(nums[r-1]>=nums[r] && r>0){
            r--;
        }
        index=r-1;
        int swapindex=0;
        int minafterindex=INT_MAX;
        for(int j=index;j<nums.size();j++){
            if(nums[j]>nums[index]){
                if(minafterindex>nums[j]) swapindex=j;
                minafterindex=min(minafterindex,nums[j]);
                
            }
        }
        swap(nums[swapindex],nums[index]);
        sort(nums.begin()+index+1,nums.end());    
        }
        }
    }

    int main(){
     vector<int>nums={1,3,2};
     nextPermutation(nums);
    }