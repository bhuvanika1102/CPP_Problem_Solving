//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/

#include<iostream>
using namespace std;
int main(){
	int n=5,endloop=0,count=0;
	int arr[n]={5,7,10,5,15};
	int arr1[n]={2,2,1,3,5};
	int arr_length=sizeof(arr)/sizeof(arr[0]);
	int min=5;
	while(endloop!=5){
		endloop=0;
        for (int i = 0; i < n; i++) {
		
		if(arr[i]>arr1[i]&&arr[i]!=min){
				arr[i]=arr[i]-arr1[i];
				count++;			
		}
	}
		for(int i=0;i<arr_length;i++){
			if(arr[i]==min){
				endloop++;
			}
		}
	}
	cout<<count;
	return 0;
	
}