#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int minDays(vector<int>& bloomDay, int m, int k) {
        int min=INT_MAX;
        int max=INT_MIN;
        int ka=0;
        int ma=0;
        int bouquets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]>max) max=bloomDay[i];
            if(bloomDay[i]<min) min=bloomDay[i];
        }
        while(min<=max){
            int mid=(min+max)/2;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid) {
                    ka++;
                } else ka=0;
                if(ka==k){
                     ma++;
                     ka=0;
            }
            }
            if(ma>=m) max=mid-1;
            else min=mid+1;
            ka=0;
            if(bouquets<ma) bouquets=ma;
            ma=0;
        }
        if(bouquets<m) return -1;
        return min;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    
    return 0;
}

