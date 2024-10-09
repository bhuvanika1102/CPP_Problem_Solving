//DTSKILLS INTERVIEW QUESTION

#include<iostream>
using namespace std;
int main(){
	string str;
	cout<<"enter input: ";
	cin>>str;
	int arr[256]={0};
	for(char x:str){
		int num=x;
		arr[num]++;
		
	}
	for(int i=0;i<256;i++){
		if(arr[i]>1){
			char ans=i;
			cout<<ans<<" ";
		}
	}
	return 0;
	
}