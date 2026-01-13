#include<bits/stdc++.h>
using namespace std;
int main(){
     // int arr[]={2,2,2,2,2,5,6,5,8,9,7,4,5,6,2,1,3,5,4,6,99,4,5,6,5};
     // int hash[15]={0};
     // int i=sizeof(arr)/4;
     // while(i--){
     //      hash[arr[i]]++;
     // }
     // for(int j=0;j<15;j++){
     //      cout<<j<<": "<<hash[j]<<endl;
     // }

     // vector<int> v={1,2,3,4,5,6,1,2,3,4,5,6,7,8,9};
     // vector<int>hash(20,0);
     // for(auto value: v){
     //      hash[value]++;
     // }
     // for(int j=0;j<20;j++){
     //      cout<<j<<": "<<hash[j]<<endl;
     // }


     // using map >>>>>>>
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     unordered_map<int ,int >map;
     for(int i=0;i<n;i++){
          map[arr[i]]++;
     }
     for(auto it: map){
          cout<<it.first<<"  : "<<it.second<<endl;
     }


    
     return 0;
}