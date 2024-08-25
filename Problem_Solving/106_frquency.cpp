//[1,2,3,1,2,2,2,1]
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int arr[8]={1,2,3,1,2,2,2,1};
	unordered_map<int,int> freq;
	for(int x:arr){
		freq[x]++;
	}
	for(const auto& y:freq){
		if(y.second>1){
			cout<<"element: "<<y.first<<" "<<""" count: "<<y.second;
			cout<<endl;
			
		}
	}
}