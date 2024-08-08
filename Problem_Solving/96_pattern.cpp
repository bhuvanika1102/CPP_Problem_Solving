#include<iostream>
using namespace std;
int main(){
	int input=5,col_jump=1,temp=0;
	for(int i=1;i<=input;i++){
		int jump_row=i+1;
		int jump1=i;
		
		int val=temp+col_jump;
		int temp=val;
		for(int j=1;j<=input-i+1;j++){
			
			cout<<val<<" ";
			val=val+jump_row;
			jump_row++;
		}
		col_jump=col_jump+jump1;
		jump1++;
		      
		cout<<endl;
	}
	return 0;
}