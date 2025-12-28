#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
       string ans="";
        int j=num.size()-1;
        while(j>=0 &&num[j]%2==0){
            j--;
        }
        
        if(j>=0){
        for(int i=0;i<=j;i++){
            ans.push_back(num[i]);
        }
        }
        return ans;
        
        
    }
// PROBLEM DESCRIPTION LEETCODE 1903
// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
// A substring is a contiguous sequence of characters within a string
// CONSTRAINTS:::
// 1 <= num.length <= 105
// num only consists of digits and does not contain any leading zeros