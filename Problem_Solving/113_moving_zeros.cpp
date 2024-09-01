#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums){
	for(int i=0;i<nums.size()-1;i++){
		for(int j=i+1;j<nums.size();j++)
		if(nums[i]==0){
			swap(nums[i],nums[j]);
		}
	}
}
int main(){
	vector<int> nums={0,1,0,3,12};
	moveZeroes(nums);
	for(int x:nums){
		cout<<x<<" ";
	}
}