#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={6,1,4,-3,11,2,4,1,45,10,6};
	vector<int> vec;
	for(int x:arr){
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end(),greater<int>());
	int total=vec[0]+vec[1];
	cout<<total;
	return 0;
}