//1.	Find all the prime numbers within the given range.
#include<iostream>
using namespace std;
void find_prime(int low,int high){
	int k,count;
	for(int i=low;i<high;i++){
		k=1,count=0;
		while(k<=i){
			if(i%k==0){
				count ++;
				k++;
			}
			k++;
		}
		if(count == 2){
			cout<<i<<" ";
		}
	}
}
int main(){
	int low=1,high=20;
    find_prime(low,high);
	return 0;
}