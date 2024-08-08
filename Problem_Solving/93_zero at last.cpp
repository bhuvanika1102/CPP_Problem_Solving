#include<iostream>
using namespace std;
void swap(int array[],int num1,int num2){
	int temp=array[num1];
	array[num1]=array[num2];
	array[num2]=temp;
}
int main(){
	int n=5;
	int count=0;
	int array[n]={3, 5, 0, 0, 4};
	int last_non_zero_index=0;
	for(int i=0;i<n;i++){
		
		if(array[i]!=0){
			swap(array,last_non_zero_index++,i);
		
	}
	}
	for(int x:array){
		cout<<x<<" ";
	}
	return 0;
	
}