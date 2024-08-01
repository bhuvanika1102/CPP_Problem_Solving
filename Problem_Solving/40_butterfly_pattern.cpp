#include<iostream>
using namespace std;
int main(){
	int n=5;
	int space=2*n-2;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		for(int j=0;j<space;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
		space=space-2;
	}
	int space1=0;
//	int i1=n;
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		for(int j=0;j<space1;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
		space1=space1+2;
//		i1--;
	}
	return 0;
}