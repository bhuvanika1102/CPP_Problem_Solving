//DTSKILLS INTERVIEW QUESTION

#include<iostream>
using namespace std;
int prime(int num){
	int count =0;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count>2){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int num;
	cout<<"Enter Input: ";
	cin>>num;
	if(prime(num)==0){
		cout<<"not a prime";
	}
	else{
		cout<<"prime";
	}
	return 0;
}