#include<iostream>
using namespace std;
int main(){
	string result="";
	int number=50;
	while(number>0){
		number--;
		char remain='A'+(number%26);
		 result=remain+result;
		 number=number/26;
	}
	cout<<result;
	return 0;
}