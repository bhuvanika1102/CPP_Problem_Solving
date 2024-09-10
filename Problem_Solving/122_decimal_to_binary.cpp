/*Find binary of the number.

example:
	number =10
	output=1010
	*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> binary_count(int number){
	vector<int>binary(5);
	int i=0;
	while(number>0){
		binary[i]=number%2;
		number=number/2;
		i++;
		
		
	}
	return binary;
}
int main(){
	int number=29;
	vector<int> result=binary_count(number);
	for(int i=result.size()-1;i>=0;i--){
		cout<<result[i];
	}
	return 0;
}