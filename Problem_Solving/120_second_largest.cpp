/*return the second largest element in an array.it should not be the same number of first largest.if no second largest found return -1
  ---~Accenture*/
#include<iostream>
using namespace std;
int Largest(int arr[],int n){
	int max1,max2;
	if(n==1){
		return -1;
	}
	if(arr[0]>arr[1]){
		max1=arr[0];
		max2=arr[1];
	}
	else{
		max1=arr[1];
		max2=arr[0];
	}
	for(int i=2;i<n;i++){
		if(arr[i]>max1){
			max2=max1;
			max1=arr[i];
			
		}
		else if(arr[i]<max1 && arr[i]>max2&&arr[i]!=max1){
			max2=arr[i];
		}
			
		
	}
	return max2;
}
int main(){
	int arr[10]={1,3,5,2,1,9,9,9,8,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<Largest(arr,n);
	return 0;
}