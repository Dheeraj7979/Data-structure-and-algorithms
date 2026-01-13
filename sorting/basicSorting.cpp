#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> array={5,4,3,2,1,0};
     // through selection sort : just select the smallest and swap with starting index ++
     for(int i=0;i<array.size();i++)
     {
          int smallest=i;
          for(int j=i;j<array.size();j++)
          {
               if(array[j]<array[smallest]) smallest=j;
          }
          swap(array[i],array[smallest]);
     }
     for(auto num:array)
     {
          cout<<num<<"   ";
     }
     cout<<endl;



     // through bubble sort :>>>> 
     // it pushes the maximum to the last ; 
     // in this we swap the elements with the next one 
     // for(int i=array.size()-1;i>=0;i--){
     //      int didswap=0;
     //      for(int j=0;j<i;j++){
     //           if(array[j]>array[j+1]){
     //                 swap(array[j],array[j+1]);
     //                 didswap++;
     //                }
     //      }
     //           if(didswap==0) break;
     // }
     // for(auto num: array){
     //      cout<<num<<"   ";
     // }




     // Insertion sort algorithm : it push elements in their correct position 
     // take single element array then increase elements accordingly 
     // for(int i=0;i<array.size()-1;i++){
     //      for(int j=i;j>=0;j--){
     //           if(array[j]>array[j+1]){
     //                swap(array[j],array[j+1]);
     //           }
     //      }
     // }



for(auto num: array){
     cout<<num<<"   ";
}
     
}