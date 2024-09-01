//LEETCODE 326. Power of Three
#include<iostream>
#include<cmath>
using namespace std;
bool PowerOfThree(int num){
	for(int i=0;i<=32;i++){//32 why?--> coz In a 32-bit signed integer, the maximum positive value is 2,147,483,647
	//The maximum power of 3 that is less than or equal to this value is 1,162,261,467 which is the largest power of 3 that fits in a 32-bit signed integer.
		double n=pow(3,i);
		if(n==num){
			return true;
		}
	
	}
		return false;
}
int main(){
	int num=27;
	cout<<PowerOfThree(num);
	return 0;
}