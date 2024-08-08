#include<iostream>
using namespace std;
int main(){
	int input=5,col=1,temp=0;
	int next_jump=input;
	for(int i=1;i<=input;i++){
		int row=i+1;
		int jump1=i;
		int next_val;
		int val=temp+col;
		int temp=val;
		for(int j=1;j<=input;j++){
			
			if(j<=input-i+1){
			cout<<val<<" ";
			next_val=val;
			val=val+row;
			row++;
	}
			else{
				next_val=next_val+next_jump;
				cout<<next_val<<" ";
				next_jump--;
				}
		}
		col=col+jump1;
		jump1++;
		next_jump=input;
		cout<<endl;
	}
	return 0;
}