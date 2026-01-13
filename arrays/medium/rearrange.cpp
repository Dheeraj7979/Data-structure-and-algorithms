// Rearrange the positive and negative elements in alternating order ... order of same sign elements should be maintained 
#include<bits/stdc++.h>
using namespace std;

// 1. LEETCODE PROBLEM :- no. of positive and negative elements are same 
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


//     2. Extended version:- IF no. of positive and negative elem are not same 
     vector<int> bruteforce(vector<int>&nums){
          vector<int>pos;
          vector<int>neg;
          vector<int>ans;
          for(auto it:nums){
               if(it>=0) pos.push_back(it);
               else neg.push_back(it);
          }
          int i=0;
          while(i<pos.size()&& i<neg.size()){
               ans.push_back(pos[i]);
               ans.push_back(neg[i]);
               i++;
          }
          while(i<pos.size()){
               ans.push_back(pos[i]);
               i++;
          }
          while(i<neg.size()){
               ans.push_back(neg[i]);
               i++;
          }
          return ans;
          
     }




     int main(){
          vector<int>nums={-1,-5,9,-2,7,6};
          vector<int>ans=rearrangeArray(nums);
          for(auto num:ans) cout<<num<<"    ";
          cout<<endl;

          vector<int>num2={-1,-5,-2,-6,8,-8,-9,-10,44};
          vector<int>ans2=bruteforce(num2);
          for(auto num:ans2) cout<<num<<"     ";

     }