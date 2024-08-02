#include<iostream>
using namespace std;
int main(){
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			cout<<"-";
		}
		for(int j=0;j<=i;j++){
			cout<<i<<" ";
		}
	
		cout<<endl;
	}
	for(int i=n;i<n+n;i++){
		for(int j=n;j>=i;j--){
			cout<<"-";
		}
		for(int j=0;j<=i;j++){
			cout<<i<<" ";
		}
	
		cout<<endl;
	}
	return 0;
}