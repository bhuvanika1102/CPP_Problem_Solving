#include<iostream>
using namespace std;

   int reverse(long num){
	long rem,sum=0;
	while(num!=0){
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
    if(sum<INT_MIN||sum>INT_MAX) return 0;
	return sum;
}
    
int main(){
	int result=reverse(-120);
	cout<<result;
	return 0;
}