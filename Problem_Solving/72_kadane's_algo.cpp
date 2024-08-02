#include<iostream>
using namespace std;
int main(){
	int arr[8]={-2,-3,4,-1,-2,1,5,-3};
	int sum=0,max=INT_MIN;
	int len=end(arr)-begin(arr);
	for(int i=0;i<len;i++){
		sum=sum+arr[i];
		if(sum>max){
			max=sum;
		}
		if(arr[i]>sum){
			sum=arr[i];
		}
	}
	cout<<max;
	return 0;
}