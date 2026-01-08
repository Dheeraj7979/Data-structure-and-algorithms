problem no 151 leetcode 
  link :  https://leetcode.com/problems/reverse-words-in-a-string/description/


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
