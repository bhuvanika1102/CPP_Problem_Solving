#include<iostream>
using namespace std;
int main(){
	int rupee=29;
	int rem=rupee%10; //9
	int count=rem; //9
	rupee=rupee-10; //20
	while(rupee>=0){
		count=count+14;
		rupee=rupee-10;
	}
	cout<<count;
	return 0;
}