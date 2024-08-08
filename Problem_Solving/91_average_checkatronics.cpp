#include<iostream>
using namespace std;
int average(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum/n;
}
int find_num(int arr[],int n1){
	int avg=average(arr,n1);
	int dble=2*avg;	
	int sum=avg*n1;
	int sum1=dble*(n1+1);
	 sum=sum1-sum;
	return sum;
}
int main(){
	
	int arr[5]={1,2,3,4,10};
	int n=end(arr)-begin(arr);
	
	int result=find_num(arr,n);
	cout<<result;
	return 0;
}