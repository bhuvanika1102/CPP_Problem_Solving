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
int main(){
	string str="bhuvanika";
	string result=sort(str);
	cout<<result;
	return 0;
}