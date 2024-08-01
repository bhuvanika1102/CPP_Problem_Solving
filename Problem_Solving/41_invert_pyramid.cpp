#include<iostream>
using namespace std;
int main(){
	int n=5;
	int star=(2*n)-1;
	for(int i=0;i<n;i++){
		for(int space=0;space<i;space++){
			cout<<"  ";
		}
		for(int j=0;j<star;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		star=star-2;
	}
	return 0;
}