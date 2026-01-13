#include<bits/stdc++.h>
using namespace std;

int countOccurrences(const vector<int>& arr, int target) {
        // Your code goes here
        int low=0;
        int high=arr.size()-1;
        // code for lowest index
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=target) high=mid-1;
            else{
                low=mid+1;
            }
        }
            int lowindex=low;
            // code for greatest index
            low=0;
            high=arr.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]<=target) low=mid+1;
                else high=mid-1;
            }
            int highindex=high;
            
        
        return highindex-lowindex+1;
    }
int main(){
     vector<int>arr={0,0,1,1,1,2,3};
     int target=1;
          cout<<countOccurrences(arr,target);
}