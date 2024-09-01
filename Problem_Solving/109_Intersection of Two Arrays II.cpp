//LEETCODE 350. Intersection of Two Arrays II

#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(vector<int> arr,vector<int> arr1){
	
		
	vector<int> vec;		
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr1.size();j++){
			if(arr[i]==arr1[j]){
				vec.push_back(arr[i]);
				arr1[j]=INT_MIN;
				break;
			
		}
	}
}
	return vec;
	}
int main(){
	vector<int> arr={1,2,3,4};
	vector<int> arr1={3,5,4};
	vector<int>ans=solve(arr,arr1);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}