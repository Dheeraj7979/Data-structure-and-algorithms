#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        string ans="";
        if(s.size()==0) return ans;
        if(s.size()==1){
            if(s[0]==' ') return ans;
            else return s;
        }

        vector<int>hash;
        if(s[0]!=' ') hash.push_back(0);
        for(int i=1;i<s.size();i++){
            
            if(s[i]!=' '&& s[i-1]==' ') hash.push_back(i);
        }

        for(int i=hash.size()-1;i>=0;i--){
            int j=hash[i];
            while((s[j]!=' '||s[j]!='\0')&& j<s.size()){
                ans.push_back(s[j]);
                j++;
                if(s[j]==' ')break;
            }
            ans.push_back(' ');
        }
        ans.pop_back();
     
        return ans;

    }



//     PROBLEM DESCRIPTION LEETCODE 151
//     Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces

// CONSTRAINTS
// 1 <= s.length <= 104
// s contains English letters (upper-case and lower-case), digits, and spaces ' '.
// There is at least one word in s