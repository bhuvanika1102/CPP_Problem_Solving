/*7.	Given an input integer ‘N’, print the following binary pattern for it.

Input:

4

Output:

1111
000
11
0*/

#include<iostream>
using namespace std;
int main(){
	int num=4,flag=0;
	for(int i=0;i<4;i++){

		for(int j=0;j<num-i;j++){
			if(flag==0){
				cout<<"1"<<" ";
				
			}
			else{
				cout<<"0"<<" ";
				
			}
		}
		flag=1-flag;
		cout<<endl;
	}
}