#include<iostream>
using namespace std;
int main(){
	int n=10;
	int num1=n+n-1;
	int h=num1/2+1;
     int h1=h;
	for(int i=0;i<h1;i++){
		for(int j=0;j<num1;j++){
			if(i==0){	
				cout<<"*"<<" ";	
			}
			else if(j<h || j>num1-h-1){
							cout<<"*"<<" ";
						}
			else{
							cout<<" "<<" ";
						}
						
					
				}
				h--;
				cout<<endl;
			}
			
			h=2;
			h1=num1/2;
			for(int i=0;i<h1;i++){
		for(int j=0;j<num1;j++){
			if(i==h-1){	
				cout<<"*"<<" ";	
			}
			else if(j<h || j>num1-h-1){
							cout<<"*"<<" ";
						}
			else{
							cout<<" "<<" ";
						}
						
					
				}
				h++;
				cout<<endl;
			}
		
	
	return 0;
}