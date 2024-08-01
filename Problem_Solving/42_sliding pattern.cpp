#include<iostream>
using namespace std;
int main(){
	int n=10;
	int space=n-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<space;j++){
			cout<<"  ";
		}
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
		space--;
	}
	return 0;
}