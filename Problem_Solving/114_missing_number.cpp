//LEETCODE 268. Missing Number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNumbers(vector<int>& nums){
	sort(nums.begin(),nums.end());
	for(int i=0;i<=nums.size();i++){
		if(nums[i]!=i){
			return i;
		}
	}
	return nums.size();
}
int main(){
	vector<int> nums={3,0,1};
	cout<<missingNumbers(nums);
	return 0;
}