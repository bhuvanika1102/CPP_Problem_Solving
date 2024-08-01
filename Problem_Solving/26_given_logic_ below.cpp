#include<iostream>
#include<vector>
using namespace std;
int main(){
	int num=34246;
	int target=num%10;
	int num1=0;
	int num11=num/10;
	int sum=0;
	int rem;
	int count=0;
	while(num11!=0){
		
		 rem=num11%10;
	     sum=sum+(rem*2);
		 num11=num11/10;
		 count++;
	}
//	cout<<sum;
//c   out<<count;
     if(sum/count==target){
     	cout<<"SUCCESS";
	 }
	 else{
	 	cout<<"FAIL";	 	
	 }
	return 0;
}