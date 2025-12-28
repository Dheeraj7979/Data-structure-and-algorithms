// problem description given below the code 

#include<bits/stdc++.h>
using namespace std;
string removeOuterParentheses(string s) {
        string ans="";
        if(s.length()==0) return ans;
        // int lastelem=1;
        int elem=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(elem!=0) ans.push_back(s[i]);
                elem++; 
            }else{
                if(elem!=1) ans.push_back(s[i]);
                elem--;
            }
        }
        return ans;
        
    }

    

//     PROBLEM DESCRIPTION leetcode 1021
// A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.
// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
// A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.
// Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.
// Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s

// CONSTRAINTS
// 1 <= s.length <= 105
// s[i] is either '(' or ')'.
// s is a valid parentheses string