#include<iostream>

using namespace std;
int main(){
	string str1="liston";
	string str2="silent";
	int s=str1[0];
	str1=str1+str2;
	
	for(int i=1;i<str1.length();i++){
		s=s^str1[i];
	}
	if(s==0){
		cout<<"anagram";
		
	}
	else{
		cout<<"not an anagram";
	}
	return 0;
}