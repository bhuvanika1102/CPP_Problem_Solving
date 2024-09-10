/*Find binary of the number.and count the number of one's in it(sum of binary)

example:
	number =10
	binary=1010
	output====>1+0+1+0=2*/
#include<iostream>
using namespace std;
int binary_count(int number){
	int count=0;
	while(number>0){
		int binary=number%2;
		if(binary==1){
			count++;
			
		}
		number=number/2;
		
		
	}
	return count;
}
int main(){
	int number=29;
	cout<<binary_count(number);
	return 0;
}