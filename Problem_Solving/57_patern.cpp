#include<iostream>
using namespace std;
int main(){
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=n;j>=1;j--){
			for(int k=0;k<n-i;k++){
				cout<<j<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
	
}