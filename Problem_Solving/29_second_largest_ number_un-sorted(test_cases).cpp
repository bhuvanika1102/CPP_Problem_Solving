#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;
int main(){
	int num;
	cout<<"Number of test cases: ";
	cin>>num;
	int arr[3];
	vector<int> vec;
	for(int i=0;i<num;i++){
	for(int j=0;j<3;j++){
		cin>>arr[j];
	}
	for(int x:arr){
		vec.push_back(x);
	}
	auto max=max_element(vec.begin(),vec.end());
	vec.erase(max);
	if(!vec.empty()){
		auto max=max_element(vec.begin(),vec.end());
	     cout<<"Second Largest Number is: "<<*max<<endl;
	     
	}
}
	return 0;
}