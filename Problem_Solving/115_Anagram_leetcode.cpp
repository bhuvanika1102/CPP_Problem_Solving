#include<iostream>
#include<unordered_map>
using namespace std;
bool anagram(string str1,string str2){
	unordered_map<char,int> freq;
	for(char x: str1){
		freq[x]++;
	}
	for(char x:str2){
		freq[x]--;
	}
	for(const auto& x:freq){
		if(x.second!=0){
			return false;
		}
	}
	return true;
}
int main(){
	string str1="listten";
	string str2="sileent";
	cout<<anagram(str1,str2);
	return 0;
}