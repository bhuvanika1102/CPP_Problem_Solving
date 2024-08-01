#include<iostream>
using namespace std;
int main(){
	int n=4;
	int n1=1,n2=n;
    int spaces = n - 1;  // Initial spaces for alignment

	for(int i=0;i<n;i++){
		for(int j=0;j<spaces;j++){
			cout<<"   ";
		}
		for(int j=n1;j<=n2;j++){
			cout<<j<<" ";
		}
		cout<<endl;
		n1=n1+n;
		n2=n2+n;
		spaces--;
		
	}
	return 0;

}
