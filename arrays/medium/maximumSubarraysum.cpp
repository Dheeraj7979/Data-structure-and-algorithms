// KADANE'S ALGORITHM  sum of subarray with maximum sum 
#include<bits/stdc++.h>
using namespace std;

     // Time complexity O(N*N);......
int bruteforce(vector<int>arr){
    int maxsum=INT16_MIN;
    for(int i=0;i<arr.size();i++){
     int sum=0;
     for(int j=i;j<arr.size();j++){
          sum+=arr[j];

          maxsum=max(sum,maxsum);
     }
    }
    return maxsum;
}

// optimal approach o(N) by kadane's algorithm ::: ONLY FOCUS ON SUM<0 CASE :::: COMPARE MAXSUM WITH SUM AND WHEN SUM IS NEGATIVE REPLACE IT BY ZERO
int optimal(vector<int>arr){
     int sum=arr[0];
     int maxsum=sum;
    
    for(int i=1;i<arr.size();i++){
        if(sum<=0) sum=0;
          sum+=arr[i];
          
          maxsum=max(sum,maxsum);
          
    }
     return maxsum;

}



int main(){
     vector<int>arr={2,3,5,-2,7,-4};
     cout<<bruteforce(arr)<<endl;
     cout<<optimal(arr);
     
}