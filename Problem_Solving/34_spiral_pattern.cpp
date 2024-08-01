#include<iostream>
using namespace std;
int main(){
	int n=5;
	int top=0,bottom=n-1;
	int left=0,right=n-1;
	int matrix[n][n];
	int num=1;
	while(num<=n*n){
		for(int i=top;i<=right;i++){
			matrix[top][i]=num;
			num++;
		}
		top++;
		for(int i=top;i<=bottom;i++){
			matrix[i][bottom]=num;
			num++;
		}
		bottom--;
	    for(int i=bottom;i>=left;i--){
	    	matrix[right][i]=num;
	    	num++;
		}
		right--;
		for(int i=bottom;i>=top;i--){
			matrix[i][left]=num;
			num++;
		}
		left++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}