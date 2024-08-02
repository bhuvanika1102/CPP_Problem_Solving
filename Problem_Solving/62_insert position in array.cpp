#include<iostream>
using namespace std;
int main(){
	int n=6;
	int arr1[n]={1,3,4,5,7,9};
	int target=10;
	if(target<arr1[0]){
		cout<<"NULL  "<<arr1[0];
	}
	else if(target>arr1[n-1]){
		cout<<arr1[n-1]<<"  NULL";
	}
	else{
		int start=0;
		int end=n-1;
		while(start<=end){
			int mid=(start+end)/2;
			if(target==arr1[mid]){
				cout<<"already present";
				break;
			}
			
			else if(target>arr1[mid]){
				if(target<arr1[mid+1]){
					cout<<arr1[mid]<<" "<<arr1[mid+1];
					break;
				}
				else{
					start=mid+1;
				}
			}
			else{
				if(target>arr1[mid-1]){
					cout<<arr1[mid-1]<<" "<<arr1[mid];
					break;
				}
				else{
					end=mid-1;
				}
			}
		}
	}
	return 0;
}