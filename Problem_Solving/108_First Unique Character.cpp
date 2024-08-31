//LEETCODE 387. First Unique Character in a String
#include<iostream>
#include <map>
using namespace std;
int firstUniqChar(string s) {
        map<char,int> freq;
	for(char x:s){
		freq[x]++;
	}
	for(int i=0;i<s.size();i++){
		if(freq[s[i]]==1){
			return i;
			break;
		}
	}
    return -1; 
    }
int main(){
	string str="loveleetcode";
	cout<<firstUniqChar(str);
}