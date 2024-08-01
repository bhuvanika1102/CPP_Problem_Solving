#include<iostream>
using namespace std;
int main(){
	int n=5;
	int col=1,cc,temp;
	int space=n-1;
	for(int i=0;i<space+2;i++){
		cout<<"  ";
	}
	cout<<col<<"\n";
	int c=0;
	for(int i=0;i<n-1;i++){
		space=space-1;
		for(int j=0;j<space;j++){
			
			cout<<"   ";
		}
		col=col+n-i;
		temp=col;
		cc=n-i;
		cout<<temp<<" ";
		while(c<=i){
		cout<<temp-(cc-1)<<" ";
			
			temp=temp-(cc-1);
			cc++;
			c++;
		}
		c=0;

		cout<<endl;
		
	}
	
	return 0;
}
//
//
////#include<iostream>
////using namespace std;
////int main(){
////	int n=5,row=n-1,col=0,second=n-4,first,space=5,num=1,space1=0;
////	int mat[n][n];
////	for(int i=0;i<n;i++){
////		for(int j=i;j<n-1;j++){
////			cout<<"--"<<" ";
////			space--;
////			space1++;
////		}
////		int space2=space1;
////		for(int j=0;j<space;j++){
////			
////			cout<<num<<" ";
//////			if(space2<5){
//////				cout<<num-(space2+1);
//////			}
////					}
//////		num=num+n
////		num=num+space2+1;
////		cout<<endl;
////		space=5;
////		space1=0;
////	}
////	return 0;
////}

