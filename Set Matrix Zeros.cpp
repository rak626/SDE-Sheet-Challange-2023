#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size(), m = matrix[0].size();

	bool isRow = 0, isCol = 0;


//marking the process
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(i == 0 and matrix[i][j] == 0 ){
				isRow = 1;
			}
            if( j == 0 and matrix[i][j] == 0){
				isCol = 1;
			} 
            if(matrix[i][j] == 0) {
				matrix[i][0] = 0;
				matrix[0][j] = 0; 
			}
		}
	}

	for(int i = 1 ; i < n ; i++){
		for(int j = 1 ; j < m ; j++){
			if(matrix[i][0] == 0 or matrix[0][j] == 0){
				matrix[i][j] = 0;
			}
		}
	}
	if(isRow){
		for(int j = 0; j < m ; j++){
			matrix[0][j] = 0;
		}
	}
	if(isCol){
		for(int i = 0; i < n ; i++){
			matrix[i][0] = 0;
		}
	}

}