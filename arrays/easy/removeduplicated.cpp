// remove  duplicates from sorted array   

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& array,int low,int mid,int high){
     int left=low;
     int right=mid+1;
     vector<int>temp;
     while(left<=mid && right<=high){
          if(array[left]<=array[right]){
               temp.push_back(array[left]);
               left++;
          } else {
               temp.push_back(array[right]);
               right++;
          }
     }
     while(left<=mid){
          temp.push_back(array[left]);
          left++;
     }
     while(right<=high){
          temp.push_back(array[right]);
          right++;
     }
     for(int i=low;i<=high;i++){
          array[i]=temp[i-low];
     }

}
void mergesort(vector<int> & array,int low,int high){
     if(low>=high) return ;
     int mid=(low+high)/2;
     mergesort(array,low,mid);
     mergesort(array,mid+1,high);
     merge(array,low,mid,high);

}
int main(){
     vector<int>array={2,1,3,7,88,9,6,5,5,2,11,6,3,0} ;
     int high=array.size()-1;
     mergesort(array,0,high);

     
     vector<int>newarray;
     newarray.push_back(array[0]);
     for(int i=0;i<high;i++){
          if(array[i]!=array[i+1]){
               newarray.push_back(array[i+1]);
          }

     }
     for(auto values: newarray){
          cout<<values<<"     ";
     }

     return 0;
}