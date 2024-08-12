#include<iostream>
using namespace std;
int main(){
	int n=5,flag=1,flag1=1;
	for(int i=0;i<n;i++){
			
		int flag1=flag;
		for(int j=0;j<i;j++){
			cout<<flag;
			flag=1-flag;
		}
		flag=1-flag1;
		cout<<endl;
	}
}