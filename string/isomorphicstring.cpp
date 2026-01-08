link :- https://leetcode.com/problems/isomorphic-strings/
  leetcode problem no. = 205


bool isIsomorphic(string s, string t) {
        // map<char,char>map1;
        // for(int i=0;i<s.size();i++){
        //     if(map1.find(s[i])!=map1.end()){
        //         if(map1[s[i]]!=t[i]){
        //             return false;
        //         }
        //     } else{
        //         map1.emplace(s[i],t[i]);
        //     }
        // }
        // map<char,char>map2;
        // for(int i=0;i<s.size();i++){
        //     if(map2.find(t[i]),map2.end()){
        //         if(map2[t[i]]!=s[i]){
        //             return false;
        //         }
        //     } else{
        //         map2.emplace(t[i],s[i]);
        //     }
        // }


    // through hashing 
    vector<int>hash1(256,0);
    vector<int>hash2(256,0);
    vector<int>hash3(256,0);
    vector<int>hash4(256,0);
    for(int i=0;i<s.size();i++){
        if(hash1[s[i]-'\0']==0){
            hash1[s[i]-'\0']=1;
            hash2[s[i]-'\0']=t[i]-'\0';
        }else{
            if(hash2[s[i]]!=t[i]-'\0'){
                return false;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        if(hash3[t[i]-'\0']==0){
            hash3[t[i]-'\0']=1;
            hash4[t[i]-'\0']=s[i]-'\0';
        }else{
            if(hash4[t[i]]!=s[i]-'\0'){
                return false;
            }
        }
    }
    

        return true;
    }
