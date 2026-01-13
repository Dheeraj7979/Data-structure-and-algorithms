     //  an element which is more than n/2 times return the majority element 

#include<bits/stdc++.h>
using namespace std;
     
// through sorting of array  T.C.= N(logN +1); Space no;
int  better(vector<int>&arr){
     int n=arr.size();
     sort(arr.begin(),arr.end()-1);
     int count=0;
     int lastelem=arr[0];
     for(int i=0;i<n;i++){
          if(arr[i]==lastelem){
                count++;
                if(count>n/2) return arr[i];
                            
               }else{
                    lastelem=arr[i];
                    if(count>n/2) return arr[i];
                    else count=1;
               }

     }
     return 0;
     
}

// THROUGH HASH MAP most bruteforce approach with T.C = Nlog +N :  SPACE N;
int hashmap(vector<int>&arr){
     map<int,int> mpp;
     for(auto elem:arr){
          mpp[elem]++;
     }
     for(auto it:mpp){
          if(it.second>(arr.size())/2) return it.first;
     }
     return -1;
}

//  int optimal(vector<int>&arr){

//  }
int main(){
     vector<int>arr={7,0,0,1,7,7,2,7,7};
     vector<int>arr2={1,1,1,2,1,2};
     // cout<<better(arr2);

     cout<<hashmap(arr);
     // cout<<optimal(arr);

     return 0;
}