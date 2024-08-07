/*Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).*/
#include<iostream>
using namespace std;
int sumcloset(int arr[],int target){
	int backup1=target-1,backup2=target+1;
	int length=4,flag=0;
	for(int i=0;i<length-2;i++){
		for(int j=i+1;j<length-1;j++){
			for(int k=j+1;k<length;k++){
			if(arr[i]+arr[j]+arr[k]==backup1){
				return backup1;
				flag=1;
					
				
			}
			else if(arr[i]+arr[j]+arr[k]==backup2){
				
					return backup2;
					flag=1;
			
				
			}
			else{
				backup1--;
				backup2++;
			}
		}
}
}
return backup2;
}
int main(){
	int arr[4]={0,0,0,0};
	int target=1;
	int res=sumcloset(arr,target);
	cout<<res;
	return 0;
	
}