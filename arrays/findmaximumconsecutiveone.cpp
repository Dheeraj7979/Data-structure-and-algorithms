 #include<bits/stdc++.h>
 using namespace std;

 int singleNumber(vector<int>& nums) {
        int xr=nums[0];
        int lastnum=-999999999;
        for(int i=1;i<nums.size();i++){
            xr=xr^nums[i];
        }
        return xr;
    }
 int main(){
 
        int count=0;
        int lastone=0;
        vector<int>nums={1,1,0,1,1,1,1,0,0,0,1,1,1};
        for(auto num:nums){
            if(num==1){
                count++;
                 if (lastone<count){
                lastone=count;
            } 
        } else{
            count=0;
        }
        }
         cout<<lastone;
    return 0;
}