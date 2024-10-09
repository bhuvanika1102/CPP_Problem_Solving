//DTSKILLS INTERVIEW QUESTION

#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int main(){
	int n;
	cout<<"Enter No. of Elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				swap(arr,i,j);
			}
			
		}
	}
	for(int x:arr){
		cout<<x<<" ";
	}
	return 0;
}