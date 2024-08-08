#include<iostream>
#include<vector>
using namespace std;
int main(){
	string str1="abbeddefcceacbbed";
	string str2="abbcfiefcceacbijd";
		int i=0;
		while(i<str1.length()){
			int i1=0;
			if(str1[i]!=str2[i]){
				
			    int i1=i;
				while(i < str1.length() && str1[i]!=str2[i]){
					cout<<str1[i];
					i++;
				}
				cout<<",";
				while(i1 < str1.length() && str1[i1]!=str2[i1]){
					cout<<str2[i1];
					i1++;
				}
			cout<<endl;
			}
			else{
				i++;
			}
		}
	

	return 0;
}