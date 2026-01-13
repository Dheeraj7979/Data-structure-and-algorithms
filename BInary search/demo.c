#include<stdio.h>


void binary(int arr[],int low,int high,int target){
     if(low>high){
           printf("not found"); 
           return;
     }
     int mid=(low+high)/2;
     if(arr[mid]==target) {
          printf("found");
          return;
     }
     if(arr[mid]>target) {
        return   binary(arr,low,mid-1,target);
     }
     if(arr[mid]<target) return binary(arr,mid+1,high,target);

}
int main(){
     
     int arr[]={1,2,3,4,5,6};
     // selection sort  .. . . .. ..
     // for(int i=0;i<sizeof(arr)/4;i++){
     //      int smallest=i;
     //      for(int j=i;j<sizeof(arr)/4;j++){
     //           if(arr[smallest]>arr[j]) smallest =j;
     //      }
     //      int temp=arr[i];
     //      arr[i]=arr[smallest];
     //      arr[smallest]=temp;
     // }

     // bubble sort 
     int n=sizeof(arr)/4;
     // for(int i=0;i<n;i++){
     //      for(int j=0;j<n-i-1;j++){
     //           if(arr[j]>arr[j+1]){
     //                int temp=arr[j];
     //                arr[j]=arr[j+1];
     //                arr[j+1]=temp;
     //           }
     //      }
     // }


     // insertion sort 
     // for(int i=0;i<n;i++){
     //      for(int j=n-1;j>i;j--){
     //           if(arr[j-1]>arr[j]){
     //                int temp=arr[j];
     //                arr[j]=arr[j-1];
     //                arr[j-1]=temp;
     //           }
     //      }
     // }


     // linear search
     // int num=3;
     // for(int i=0;i<n;i++) if(arr[i]==num){ printf("index : %d\n",i); break;}

     int low=0;
     int high=n-1;
     int target=8;
     // while(low<=high){
     //      int mid=(low+high)/2;
     //      if(arr[mid]==target) {
     //           printf("Element found ");
     //           break;
     //      } 
     //      if(arr[mid]>target) high=mid-1;
     //      if(arr[mid]<target) low=mid+1;
     // }
     binary(arr,low,high,target);
//     printf("%d",ans);
     // for(int i=0;i<sizeof(arr)/4;i++){
     //      printf("%d",arr[i]);
     // }

     return 0;
}