// Given two numbers N and M , find the Nth root of M. The Nth root of a number M is deffined 
// as a number x such that when x is raised to the powero= fo N , it equals M, return X or if nth 
// root is not integer return -1;

#include<bits/stdc++.h>
using namespace std;
// bruteforce 
int Nthroot(int n,int m){
          int i=1;
          int ans=-1;
          int root=n;
     while(i<m){
          if(root==m){
               return i;

          }
          root=n*root;
          i++;      
     }
     return -1;
}

     // optimal approach using binary search
     int optimal(int n,int m){
          int low=0;
          int high=m;

          while(low<=high){
               int mid=(low+high)/2;
               if(pow(n,mid)==m) return mid;
               if(pow(n,mid)<m) low=mid+1;
               if(pow(n,mid)>m) high=mid-1;
          }
          return -1;
     }

using namespace std;
int main(){
     int n=4;
     int m=1024;
     cout<<Nthroot(n,m)<<endl;
     cout<<optimal(n,m);

}