#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="Program";
	int len=str.length();
	
	for(int i=0;i<str.length();i++){
		for(int j=0;j<str.length();j++){
			if(i==j ){
				cout<<str[i];
			}
			else if (i + j == len - 1) {
                cout << str[len - 1 - i];
            }
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}