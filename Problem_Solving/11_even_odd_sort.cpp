#include <iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
	int arr[4]={4,1,2,3};
	int len=sizeof(arr)/sizeof(arr[0]);
//	cout<<len;
	for(int i=0;i<len;i+=2){
		for(int j=i+2;j<len;j+=2){
			
				if(arr[i]>arr[j]){
					swap(arr[i],arr[j]);
				}
			
			
		}
	}
		for(int i=1;i<len;i+=2){
		for(int j=i+2;j<len;j+=2){
			
				if(arr[i]<arr[j]){
					swap(arr[i],arr[j]);
				}
			
			
		}
	}
	for(int i=0;i<len;i++){
		cout<<arr[i];
	}
	return 0;
}