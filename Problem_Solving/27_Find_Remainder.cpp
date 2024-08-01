#include<iostream>
using namespace std;
int main(){
	int n,num1,num2, rem;
	cout<<"Number of test cases: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num1;
		cin>>num2;
		rem=num1%num2;
		cout<<"The Remainder is: "<<rem<<endl;
	}
	
	return 0;
}
