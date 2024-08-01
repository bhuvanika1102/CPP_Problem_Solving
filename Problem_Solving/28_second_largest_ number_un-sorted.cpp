#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={17,45,23,89,100,110,4,45};
	vector<int> vec;
	for(int x:arr){
		vec.push_back(x);
	}
	auto max=max_element(vec.begin(),vec.end());
	vec.erase(max);
	if(!vec.empty()){
		auto max=max_element(vec.begin(),vec.end());
	     cout<<"Second Largest Number is: "<<*max;
	}
	return 0;
}