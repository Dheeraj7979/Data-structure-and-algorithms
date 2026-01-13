#include<bits/stdc++.h>
using namespace std;
// A number k is given add two numbers and it is possible or not 
// Bruteforce approach for yes or no return ...
   bool twosum(vector<int>arr,int k){
     bool result=false;
     for(int i=0;i<arr.size()-1;i++){
          for(int j=i+1;j<arr.size();j++){
               if(arr[i]+arr[j]==k){
                    result = true;
                    break;
               }
          }
          if(result==true) break;
     }
           return result;
     }


     // Bruteforce approach for the indices of two number
     vector<int> twosumindices(vector<int>arr,int k){
     vector<int>result;
     for(int i=0;i<arr.size()-1;i++){
          for(int j=i+1;j<arr.size();j++){
               if(arr[i]+arr[j]==k){
                    result.push_back(i);
                    result.push_back(j);
                    break;
               }
          }
     }
           return result;
     }

     // Now try to optimise it through hashing 
     string twosumthroughHashing(vector<int>arr,int k){
          map<int,int>hashmap;

          for(int i=0;i<arr.size();i++){
               int a=arr[i];
               int more=k-a;
               if(hashmap.find(more)!=hashmap.end()){
                    return "YES";
               }
               hashmap[a]=i;
          }
     
               return "NO";
     }

     // same t.c but now alloqwed to use map do through two pointer approach 
     string twosumTwopointer(vector<int>arr,int k){
          sort(arr.begin(),arr.end());
          int i=0,j=arr.size()-1;
          while(arr[i]+arr[j]!=k && i<j){
               if(arr[i]+arr[j]<k){
                    i++;
               } 
               if(arr[i]+arr[j]>k){
                    j--;
               }
          }
          if(arr[i]+arr[j]==k && i!=j){
               return "YES";
          }
               return "NO";
     }


int main(){
     vector<int> arr={2,3,5,6,7,8,10};
     int k=14;
     // cout<<twosum(arr,k);
     //  vector<int>result=twosumindices(arr,k);
     // for(auto ans:result ){
     //      cout<<ans<<endl;
     // }

     cout<<twosumTwopointer(arr,k);

     return 0;
}