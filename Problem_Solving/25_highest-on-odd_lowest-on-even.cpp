#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> num={1,2,3,5,4,7,10};
	vector<int> num1;
	while(!num.empty()){
		auto max=max_element(num.begin(),num.end());
		num1.push_back(*max);
		num.erase(max);
		if(!num.empty()){
			auto min=min_element(num.begin(),num.end());
			num1.push_back(*min);
			num.erase(min);
		}
	}
	for(int x:num1){
		cout<<x<<" ";
	}
	return 0;
}