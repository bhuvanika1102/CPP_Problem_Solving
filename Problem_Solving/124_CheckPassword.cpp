#include<iostream>
#include <cctype>  // For isdigit, isalpha, isupper

using namespace std;
int CheckPassword(string str){
	int number_flag=0,spl_flag=0,upper_flag=0;
	int n=str.size();
	if(isdigit(str[0])){
		return 0;
	}
	if(n>4){
		for(int i=0;i<n;i++){
			if(isdigit(str[i])){
				number_flag=1;	
			}
			else if(str[i]==' '||str[i]=='/'){
				spl_flag=1;
			}
			else if(isalpha(str[i])){
				if(isupper(str[i])){
					upper_flag=1;
				}
			}
		}	
	}
	if(spl_flag==0&&upper_flag==1&&number_flag==1){
		return 1;
	}
	return 0;
}
int main(){
	string str="bB1_89";
	cout<<CheckPassword(str);
	return 0;
	
}