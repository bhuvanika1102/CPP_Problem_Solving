#include<iostream>
#include<vector>
using namespace std;
vector<char> reverse(string str){
	vector<char> letter;
    string::reverse_iterator it2;
	for(it2=str.rbegin();it2!=str.rend();it2++){
		letter.push_back(*it2);
	}
	return letter;
}
int main(){
	string str="bhuvanika";
	vector<char> result=reverse(str);
	for(char x:result){
		cout<<x;
	}
	return 0;
}