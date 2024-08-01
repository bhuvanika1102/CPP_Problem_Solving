#include<iostream>
using namespace std;
int main(){
	int n=9,space_front=n-5,space_middle=1;
	cout<<"     *"<<endl;;
	for(int i=1;i<5;i++){
		for(int j=0;j<space_front;j++){
			cout<<" ";
		}
		
		cout<<"*";
		for(int j=0;j<space_middle;j++){
			cout<<" ";
		}
		if(i!=0){
		cout<<"*";
		}
		space_middle=space_middle+2;
		space_front--;
	cout<<endl;	
	}
	space_front=1,space_middle=5;;
	for(int i=5;i>1;i--){
		for(int j=0;j<space_front;j++){
			cout<<" ";
		}
		
		cout<<"*";
		for(int j=0;j<space_middle+1;j++){
			cout<<" ";
		}
		if(i!=2){
		cout<<"*";
		}
		space_middle=space_middle-2;
		space_front++;
	cout<<endl;	
	}
	return 0;
}