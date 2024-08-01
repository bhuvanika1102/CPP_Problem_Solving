#include<iostream>
using namespace std;
int main(){
	int n=5;
//	int k=1;
	for(int i=0;i<n;i++){
		int k=i+1;
		int n1=n;
		for(int j=0;j<i+1;j++){
			
			cout<<k<<" ";
			
			k=k+(n1-1);
			n1--;
			
		}
		cout<<endl;
	}
	return 0;
	
}
