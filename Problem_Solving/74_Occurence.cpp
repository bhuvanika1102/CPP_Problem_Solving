#include<iostream>
using namespace std;
char countoccurence(const string &str){
	const int ASCII=256;
	int count[ASCII]={0};
	int max=INT_MIN;
	char result;
	for(int i=0;i<str.length();i++){
		count[str[i]]++;
	}
	for(int i=0;i<str.length();i++){
		if(count[str[i]]>max){
			max=count[str[i]];
			result=str[i];
		}
	}
	cout<<max<<" times"<<" ";
return result;
}

	

int main(){
	string str="bbbboccceurenece";
	char res=countoccurence(str);
	cout<<res;
	return 0;
}