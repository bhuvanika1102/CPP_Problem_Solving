/*Twisted Prime Number

Given a number N. Check whether N is a Twisted Prime number or not.
Note: A number is called Twisted Prime if it is a prime and its reverse is also a prime.

Example 1:

Input: N = 97
Output: 1
Explanation: 97 is a prime number. Its 
reverse 79 isalso a prime number. Thus 
97 is a  twisted Prime and so, answer is 1.
Example 2:

Input: N = 43
Output: 0
Explanation: 43 is a prime number but its 
reverse 34 is not a prime.So, 43 is not a 
twisted prime and thus, answer is 0.*/
#include<iostream>
#include<cmath>
using namespace std;
int reverse(int num){
	int rem,sum=0;
	while(num>0){
	
	rem=num%10;
	sum=sum*10+rem;
	num=num/10;
}
return sum;
	
}
bool isprime(int num){
	int count=0;
	for(int i=0;i<sqrt(num);i++){
		if(num%i==0){
			count++;
		}
		
	}
	if(count>2){
		return 0;
	}
	return 1;
}
int main(){
	
	int num=97;
	if(isprime(num)==1){
	int rev=reverse(num);
		if(isprime(rev)==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
}