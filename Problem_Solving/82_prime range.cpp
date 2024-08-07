//Program to find Prime Numbers Between given Interval

#include<iostream>
using namespace std;
int main(){
	int lower=10,upper=20;
	while(lower<=upper){
		int count=0;
		for(int i=1;i<=lower;i++){
			if(lower%i==0){
				count++;
			}
		}
		if(count==2){
			cout<<lower<<" ";
		}
		lower++;
	}
}