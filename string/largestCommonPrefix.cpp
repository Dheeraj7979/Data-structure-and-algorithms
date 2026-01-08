link :- https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
leetcode problem 14

  // solution 

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        if(strs[0]=="") return "";
        int letter=201;
        for(int i=0;i<strs.size()-1;i++){
            int j=0;
            int count=0;
            while(j<strs[i].size()&&(strs[i][j]==strs[i+1][j])){
                count++;
                j++;
            }
            letter=min(count,letter);
            if(letter==0) break;
        }
        string ans="";
        for(int i=0;i<letter;i++){
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
