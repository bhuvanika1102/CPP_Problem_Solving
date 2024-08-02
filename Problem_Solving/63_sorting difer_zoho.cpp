#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
	vector<int> vec={1,2,3,4,5,6,7,8,9};
	sort(vec.begin(),vec.end(),greater<int>());
	stack<int> stk;
	for(int x:vec){
		stk.push(x);
	}
	vector<int> vec1;
	vector<int>vec2;
	while(!stk.empty()){
		vec1.push_back(stk.top());
		stk.pop();
		if (!stk.empty()){
		vec2.push_back(stk.top());
		stk.pop();
	}
		
	}
//	for(int c:vec2){
//		cout<<c<<" ";
//	}
	cout<<"{";
	for(int x=vec1.size()-1;x>=0;x--){
		cout<<vec1[x]<<",";
	}
	for(int x=0;x<vec2.size();x++){
		cout<<vec2[x];
		if(x!=vec2.size()-1){
			cout<<",";
		}
	}
	cout<<"}";
	return 0;
}