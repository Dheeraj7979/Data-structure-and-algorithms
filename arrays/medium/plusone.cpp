#include<bits/stdc++.h>
using namespace std;


// This code is good but fails when size of array is large like int or long long will not able to store very big values
//  so deal within array it will be good without saving in int 
vector<int> plusOne(vector<int>& digits) {
        int num=0;
        vector<int>ans;
        for(int i=0;i<digits.size();i++){
            num=num*10+digits[i];
        }
        num++;

        int i=0;
        while(num!=0){
          int rem=num%10;
            ans.push_back(rem);
            num=num/10;
        }
        int j=ans.size()-1;
        while(i<=j){
            swap(ans[i],ans[j]);
            i++;
            j--;
        }

        return ans;
    }

    // optimal one 
    vector<int> plusOneOptimal(vector<int>arr){
        arr[arr.size()-1]++;
        if(arr[arr.size()-1]<=9) return arr;
        vector<int>ans;

        for(int i=arr.size()-1;i>0;i--){
            if(arr[i]==10){
                arr[i]=0;
                arr[i-1]+=1;
            } else{
                break;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==10){
                ans.push_back(1);
                ans.push_back(0);
            } else{
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }


int main (){
     vector<int>arr={8,9};
    // vector<int>ans=plusOne(arr);
    vector<int>ans=plusOneOptimal(arr);
    for(auto it:ans){
     cout<<it<<" ";
    }
     return 0;
}