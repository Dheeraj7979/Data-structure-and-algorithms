#include<bits/stdc++.h>
using namespace std;
// optimal one 
int maxEleminsubarray(vector<int> nums) {
     int k=7;
     int i=0;
     int j=0;
     int count=0;
     int currentcount=0;
     long long sum=0;
     while(j<nums.size()){

           while(sum>k && i<=j){
               sum=sum-nums[i];
               i++;
          }
          if(sum==k){
               count=max(count,j-i+1);
          }
          j++;
          if(j<nums.size()) sum+=nums[j];
           
     }
     
     return count;
}

int main(){

          vector<int>nums={1,2,3,1,1,1,1};
          cout<<maxEleminsubarray(nums);
     //      int k=5;
     //      int count=0;
     //      for(int i=0;i<nums.size();i++){
     //           int currentcount=0;
     //           int sum=0;
     //           int j=i;
     //           while(sum<k && j<nums.size()){
     //                sum+=nums[j];
     //                j++;
     //                currentcount++;
     //           }
     //           if(sum==k){
     //                if(currentcount>count){
     //                     count=currentcount;
     //                }
     //           } 
     //      }
        
     //    cout<<count;
     
     return 0;
}