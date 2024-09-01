//LEETCODE 202. Happy Number
#include<iostream>
using namespace std;
string solve(int num){
	int sum=0;
	while(num>1){
		int rem=num%10;
		num=num/10;
		sum=sum+((rem)*(rem));
	}
	if(num==1){
		return "True";
	}
	else{
		return "False";
	}
}
int main(){
	int num=2;
	cout<<solve(num);
	return 0;
}