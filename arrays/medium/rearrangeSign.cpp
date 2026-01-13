 #include<bits/stdc++.h>
 using namespace std;

 
 vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
        vector<int>ans(nums.size(),0);
        if(nums.size()==1) return nums;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) {
                ans[pos]=nums[i];
                pos+=2;
            } else{
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
    }

    int main(){
     vector<int>nums={2,-5,-6,7,-5,-44,-7,-8,4,5,6,5};
     rearrangeArray(nums);
    }