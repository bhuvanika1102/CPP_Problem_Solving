/*3.	Given two integers, find the hamming distance between two integers. Hamming distance between two integers is the number of bits that are different at the same position in both numbers.
Input:
3 14
Output:
3
*/
#include<iostream>
using namespace std;
string binary(int num){
	string result="";
	int rem;
	while(num>=1){
		rem=num%2;
		if(rem==0){
			result+='0';
		}
		else{
			result+='1';
		}
		num=num/2;
	}
	return result;
}
int main(){
	int num1=13,num2=3;
	string str1=binary(num1);
	string str2=binary(num2);
	//equalize length of both string
	if(str1.length()>str2.length()){
		while(str2.length()!=str1.length()){
			str2+='0';
		}
	}
		else{
			while(str2.length()!=str1.length()){
			str1+='0';
			}
		}
		
	//find hamming distance
	int count=0;
	for(int i=0;i<str1.length();i++){
		if(str1[i]!=str2[i]){
			count++;
		}
	}
	cout<<"The Hamming Distance is :"<<count;
		return 0;
}