/*
121. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={7,5,1,2,3,6,8,9,4};
	vector<int> diff;
	int num,flag=0,flag2=0,maxi;
	int arr_length=end(arr)-begin(arr);
	//cout<<arr_length;
	for(int i=0;i<arr_length;i++){
		if(arr[i]==1){
			num=i;
			flag=1;
		}
		if(num+1==arr_length){
			flag2=1;
		}
		
	}
if(flag2!=1){
	for(int j=num;j<arr_length-1;j++){
		for(int k=j+1;k<arr_length;k++){
		diff.push_back(abs(arr[j]-arr[k]));				
		}
	}

auto max_it = max_element(diff.begin(), diff.end());
int max_value = *max_it;
cout << "The maximum value in the vector is: " << max_value <<endl;


	

}
else{
	cout<<"0";
}
if(flag==0){
		cout<<"Product not bought yet";
		
	}
	
	return 0;
	
}