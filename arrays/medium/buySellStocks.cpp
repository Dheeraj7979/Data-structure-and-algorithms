     //  HERE GIVEN PRICES OF STOCK GIVE THE BEST TIME TO BUY AND SELL STOCKS  index means day no. ...

#include<bits/stdc++.h>
using namespace std;

          // BRUTEFORCE APPROACH WITH T.C O(N*N);
     int bruteforce(vector<int>arr){
          int maxdiff=0;
          for(int i=0;i<arr.size();i++){
               int diff=0;
               for(int j=i+1;j<arr.size();j++){
                    diff=arr[j]-arr[i];
                    if(maxdiff<diff) maxdiff=diff;
               }
          }
          return maxdiff;
     }

     // better approach
     int better(vector<int>arr){
          int mini=arr[0];
          int maxprofit=0;
          for(int i=0;i<arr.size();i++){
               int cost=arr[i]-mini;
               maxprofit=max(maxprofit,cost);
               mini=min(mini,arr[i]);
          }
          return maxprofit;
     }

     int main(){
          vector<int> arr={7,8,1,5,3,6,4};
          cout<<bruteforce(arr)<<endl;
          cout<<better(arr);

          return 0;
}