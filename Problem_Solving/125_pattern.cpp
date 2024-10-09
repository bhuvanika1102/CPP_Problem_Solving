//DTSKILLS INTERVIEW QUESTION

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter input: ";
	cin>>num;
	int flag=65;
	for(int i=0;i<num;i++){		
		for(int j=0;j<i+1;j++){
			char alpa=flag;
			cout<<alpa<<" ";
			flag++;
		}
		cout<<endl;
		flag=65;
	}
	return 0;
}