// leetcode link  :-   https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/
// problem no. 1781 medium leetcode 

int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
           vector<int>hash(26,0);
            for(int j=i;j<s.size();j++){
                 
                 int maximum=0;
                 int minimum=9999;
                //  for(int k=i;k<=j;k++){
                //     hash[s[k]-'a']++;
                   
                //  }
                hash[s[j]-'a']++;
                 for(int r=0;r<26;r++){
                     maximum=max(maximum,hash[r]);
                    if(hash[r]>0){
                        minimum=min(minimum,hash[r]);
                    }
                 }
                ans+=maximum-minimum;
            }
           
        }
        return ans;
    }
