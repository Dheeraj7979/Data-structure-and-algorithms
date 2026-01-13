#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int smallestDivisor(vector<int>& nums, int threshold) {
        int high= *max_element(nums.begin(),nums.end());
        int low=1;
        int sum=0;
        while(low<=high){
            int mid=(low+high)/2;
            for(auto it:nums){
                if(it%mid==0) sum+=it/mid;
                else sum+=it/mid+1;
            }
            if(sum>threshold) low=mid+1;
            else {
                high=mid-1;
            }
            sum=0;
        }
        return low;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}