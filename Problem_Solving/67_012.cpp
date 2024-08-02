#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n=12;
	int arr[n]={0,1,2,2,1,0,0,2,0,1,1,0};
	vector<int> vec0,vec1,vec2;
	cout<<"{";
	for(int i=0;i<12;i++){
		if(arr[i]==0){
			cout<<arr[i]<<",";
		}
		else if(arr[i]==1){
			vec1.push_back(arr[i]);
		}
		else{
			vec2.push_back(arr[i]);
		}
	}
	for(int x:vec1){
		cout<<x<<",";
	}
	for(int x:vec2){
		cout<<x<<",";
	}
	cout<<"}";
	return 0;
}