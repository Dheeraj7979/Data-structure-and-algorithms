#include<bits/stdc++.h>
using namespace std;
int square(int n){
     int i=1;
     int ans;
     for( i;i*i<=n;++i){
           ans=i;
     }
     cout<<ans<<endl;
}

int binarySqrt(int n){
     int low=1;
     int high=n;
     int ans=0;
     while(low<=high){
          int mid=(low+high)/2;
          if(mid*mid>n) high=mid-1;
          else {
               ans=max(mid,ans);
               low=mid+1;
          }
     }
     return ans;

}
int main(){
     int n=4;
     square(n);
     cout<<binarySqrt(n);
     
     return 0;
}