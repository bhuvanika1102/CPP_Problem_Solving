#include<iostream>
using namespace std;
int atoi(string str){
	int i=0;
	int sign=1;
	long ans=0;
	while(str.length()&&str[i]==' '){
		i++;
	}
	if(str[i]=='-'){
		sign=-1;
		i++;
	}
	else if(str[i]=='+'){
		i++;
	}
	else{
		while(i<str.length()){
			if(str[i]>='0'&&str[i]<'9'){
				ans=ans*10+(str[i]-'0');
			}
			else{
				return ans*sign;
			}
				
		
		}
	}
	return ans*sign;
}
int main(){
	string str="     4+2";
	int result=stoi(str);
	cout<<result;
	
	
}
