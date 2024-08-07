#include<iostream>
using namespace std;
int extra_element(int arr[],int arr1[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]!=arr1[i]){
			return i;
		}
	}
}
int main(){
	int n=7;
	int arr[n]={2,4,6,8,10,11,12};
	int arr1[n-1]={2,4,6,8,10,12};
	cout<<extra_element(arr,arr1,n);
	return 0;
}