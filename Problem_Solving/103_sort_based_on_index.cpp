#include<iostream>
using namespace std;
int comparsion(int a,int b){
	if(a==b){
		return 0;
	}
	else if(a>b){
		return 1;
	}
	else{
		return -1;
	}
}
int main(){
	int n=7,v=-1;
	int arr[n]={15,10,5,3,25,35,1};
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(comparsion(arr[i],arr[j])==v){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
		v=v*-1;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}