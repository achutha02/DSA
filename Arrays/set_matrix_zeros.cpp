#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix,int i,int m,int n){
	for(int j=0;j<m;j++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
}

void markCol(vector<vector<int>> &matrix, int j, int m,int n){
	for(int i=0;i<n;i++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int m, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				markRow(matrix,i,m,n);
				markCol(matrix,j,m,n);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == -1){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}
int main(){
	vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
	int n= matrix.size();
	int m=matrix[0].size();
	vector<vector<int>> ans=zeroMatrix(matrix,m,n);
	cout << "The final matrix is: " << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
