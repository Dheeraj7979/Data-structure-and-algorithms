link:-    https://leetcode.com/problems/add-binary/
Leetcode problem no. 67

string addBinary(string a, string b) {
        string ans="";

        int aindex=a.size()-1;
        int bindex=b.size()-1;
        char carry='0';
        int r;
        if(aindex>bindex){
             r=aindex;
        } else{
            r=bindex;
        }
        if(a[0]=='1'&&b[0]=='1'){
            r=r+1;
        }
        int r2=r;
        while(r>=0){
            ans+='0';
            r--;
        }
        
        
        while(r2>=0){
            int sum=0;
            if(aindex>=0 &&bindex>=0) sum=(a[aindex]-'0')+(b[bindex]-'0')+(carry-'0');
            else if(aindex>=0)  sum=(a[aindex]-'0')+(carry-'0');
            else if(bindex>=0)  sum=(b[bindex]-'0')+(carry-'0');
            else sum=carry-'0';
            
            if(sum==0){
                ans[r2]='0'; 
                carry='0';
            } else if(sum==1){
                 ans[r2]='1';
                 carry='0';
            
            } else if(sum==2){
                ans[r2]='0';
                carry='1';
            } else  {
                ans[r2]='1';
                carry='1';
            }
            aindex--;
            bindex--;
            r2--;
        } 
        if(ans[0]=='0' && ans.size()>1){
            ans=ans.erase(0,1);
        }

        
        return ans;
    }
