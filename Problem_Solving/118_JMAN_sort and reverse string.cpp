#include<iostream>
#include<vector>
using namespace std;
string sort(string str){
	vector<char>letter;
	for(int i=0;i<str.size()-1;i++){
		for(int j=i+1;j<str.size();j++){
			if(str[i]>str[j]){
				swap(str[i],str[j]);
			}
		}
	}
	return str;
}
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
	string result=sort(str);
	vector<char> result1=reverse(result);
	for(char x:result1){
		cout<<x;
	}	return 0;
}