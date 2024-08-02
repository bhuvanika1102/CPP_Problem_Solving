#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<string> str={"i","like","sam","sung"};
	vector<string> str2;
	string pattern="ilike";
	for(string x:str){
	str2.push_back(x);
		}
//		for(string x:str2){
//	       cout<<x;
//		}
//		cout<<pattern.size();
for(int i=0;i<str.size();i++){
	if(pattern==str2[i]){
		cout<<str2[i];
	}
}

	return 0;
}