link :- https://leetcode.com/problems/rotate-string/
leetcode problem :- 796

bool rotateString(string s, string goal) {   
        for(int i=0;i<s.size();i++){
            string temp="";
            for(int j=0;j<s.size()-1;j++){
                temp+=s[j+1];
            }
            temp+=s[0];
            if(temp==goal){
            return true;
        } else{
            s=temp;
        }
        }
        
        return false;
    }
