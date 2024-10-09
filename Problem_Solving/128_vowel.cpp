//DTSKILLS INTERVIEW QUESTION

#include<iostream>
using namespace std;
int check_vowel(string str){
	int count =0;
	for(char x:str){
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
			count++;
		}
	}
	return count;
}
int main(){
	string str;
	cout<<"Enter String: ";
	cin>>str;
	cout<<"Vowel count: "<<check_vowel(str);
	return 0;
}