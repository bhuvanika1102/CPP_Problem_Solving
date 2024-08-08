#include<iostream>
using namespace std;
void frequency_sort(int arr[],int n){
	int maximum=1000;
	int freq[maximum]={0};
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((freq[arr[i]]<freq[arr[j]])||((freq[arr[i]]==freq[arr[j]])&&arr[i]<arr[j])){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int n=10;
	int array[n]={4,3,2,2,3,3,3,2,4,4};
	frequency_sort(array,n);
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}