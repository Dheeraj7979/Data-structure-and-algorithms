#include<bits/stdc++.h>
using namespace std;
int main(){
     int array[]={15,4,5,6,44,7,8,5,6,1,2,4,4,5,2,55,2,4,0,456};
     int n=sizeof(array)/4;
     int k;
     cin>>k;
     bool check =false;
     for(int i=0;i<n;i++){
          if(array[i]==k){
               check =true;
               break;
          }
     }
     if(check==true) cout<<"true";
     else cout<<"false";
     return 0;
}