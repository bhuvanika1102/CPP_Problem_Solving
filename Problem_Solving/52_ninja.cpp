/*

. Ninja is planning a reunion with his team members. So he wants to know the sum of
the absolute difference between the distances between their houses.
He collected the data and this data is given in sorted order in the form of an array/list
'POS' of size 'N'.
Your task is to find out the sum of the absolute difference between elements with each
element of the given sorted array ‘POS’.
Example:
Suppose the given array is [ 2, 5, 8, 9 ]. So you have to return [ 16, 10, 10, 12 ] as the
output as :
‘16’ = | 2 - 2 | + | 2 - 5 | + | 2 - 8 | + | 2 - 9 | = 0 + 3 + 6 + 7
‘10’ = | 5 - 2 | + | 5 - 5 | + | 5 - 8 | + | 5 - 9 | = 3 +0 + 3 + 4
‘10’ = | 8 - 2 | + | 8 - 5 | + | 8 - 8 | + | 8 - 9 | = 6 + 3 + 0 + 1
‘12’ = | 9 - 2 | + | 9 - 8 | + | 5 - 9 | + | 12 - 12 | = 7 + 1 + 4 + 0
Testcase 1:
Sample Input 1:
2
4
3 5 8 9
4
5 10 15 20
Sample Output 1
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n=4;
	int arr1[4],arr2[4]={0},k=0;
	int arr[4]={2,5,3,1};
	int count=1;
	while(count<=n){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			arr2[k]=arr2[k]+abs(arr[i]-arr[j]);
			
		}
		k++;
		count++;
	}
	
}
	for(int x:arr2){
		cout<<x<<" ";
	}
	return 0;
}