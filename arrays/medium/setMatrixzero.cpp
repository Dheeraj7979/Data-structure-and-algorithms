 #include<bits/stdc++.h>
 using namespace std;
 

//  brute force with space complexity O(m+N);
 void setZeroes(vector<vector<int>>& matrix) {


        vector<int>rows(matrix.size(),0);
        vector<int>cols(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for(int i=0;i<rows.size();i++){
            if(rows[i]>0) {
            for(int k=0;k<matrix[0].size();k++){
                        matrix[i][k]=0; 
                    }
                }
        }

        for(int i=0;i<cols.size();i++){
            if(cols[i]>0){
            for(int k=0;k<matrix.size();k++){
                        matrix[k][i]=0; 
                    }
                }
            }
    }




