#include<bits/stdc++.h>
#include<string>
using namespace std;
void printfivetimes(int count ){
     if(count==5){
          return;
     }
     count++;
     cout<<"Print five times"<<endl;
     printfivetimes(count);
}

void print1toN(int n,int count){
     if(count==n){
          cout<<count;
          return ;
     }
     cout<<count<<endl;
     count++;
     print1toN(n,count);
}

void printNto1(int n){
     if(n==0) return ;
     cout<<n<<endl;
     n--;
     printNto1(n);
}

void print1toNbacktrack(int i,int n){
     if(i<1){
          return ;
     }
     print1toNbacktrack(i-1,n);
     cout<<i<<endl;
}

void printNto1backtrack(int i,int n){
     if(i>n){
          return;
     }
     printNto1backtrack(i+1,n);
     cout<<i<<endl;

}

int sumFirstN(int n){
     if(n==1) return 1;
     return sumFirstN(n-1)+n;
}

void reversearray(int array[],int s,int e){
     if(e/2<=s){
          for(int i=0;i<e;i++){
               cout<<array[i]<<endl;
               
          }
          return ;
     }
     swap(array[s],array[e-s-1]);
     reversearray(array,s+1,e);
     
}
void checkpalidrome(string word,string wd,int s,int e){
     if(s>=e/2){
          if(word==wd) cout<<"true";
          else cout<<"false";
          return;
     }
     swap(word[s],word[e-s-1]);
      checkpalidrome(word,wd,s+1,e);  
}

// void printfibonacci(int n){
//      cout<<fibonacci(n);
// }

// int fibonacci(int n){
//      if(n<=1){
//           cout<<n<<endl;
//           return n;
//      }
//      int printnum=fibonacci(n-1)+fibonacci(n-2);
//      cout<<printnum<<endl;
//      return printnum;

     
// }

int main(){
     int count =0;
     // int n=10;
     int array[]={1,2,3,4,5,6,7};
     int s=0,e=sizeof(array)/sizeof(array[0]);
     string word="madam";
     int end=word.length();
     
     // printfivetimes(count);
     // print1toN(n,count);
     // printNto1(n);

     // print1toNbacktrack(n,n);
     // printNto1backtrack(1,n);
     // cout<<sumFirstN(n);
     // reversearray(array,s,e);
     // checkpalidrome(word,word,s,end);
     int n;
     cin>>n;
     // cout<<fibonacci(n);
     
     return 0;
}