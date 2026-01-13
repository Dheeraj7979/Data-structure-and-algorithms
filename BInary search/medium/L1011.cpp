#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int shipWithinDays(vector<int>& weights, int days) {
        int sum=accumulate(weights.begin(),weights.end(),0);
        int max=*max_element(weights.begin(),weights.end());
        int low;
        if(sum/days>max) low=sum/days;
        else low=max;
        int high=sum/2+1;
        while(low<=high){
            int sum=0;
            int checkdays=0;
            int mid=(low+high)/2;
            for(int i=0;i<weights.size();i++){
                
                if((sum+weights[i])<mid) sum=sum+weights[i];
                else if(sum+weights[i]==mid) {
                    sum=0;
                    checkdays++;
                } else {
                    sum=weights[i];
                    checkdays++;
                }

                if(sum<=mid && i==weights.size()-1 && sum!=0) checkdays++;
            }
        
            if(checkdays<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}