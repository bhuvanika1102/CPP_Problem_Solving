#include<iostream>
//#include <iomanip>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value : ";
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=n-i+1;j<=n;j++){
			cout<<j;
		}
		cout<<"0";
		for(int j=n;j>=n-i+1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}