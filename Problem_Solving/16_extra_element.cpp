/*Find the extra element and its index

Input : [ 10, 20, 30, 12, 5 ]
    [ 10, 5, 30, 20 ]
Output : 12 is the extra element in array 1 at index 4

Input : [ -1, 0, 3, 2 ]
    [ 3, 4, 0, -1, 2 ]
Output : 4 is the extra element in array 3 at index 5
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> arr={10,20,30,12,5,8,1};
	vector<int> arr2={10,5,30,20,12,1,8,7};
	sort(arr.begin(),arr.end());
	sort(arr2.begin(),arr2.end());
//	for(int x:arr2){
//		cout<<x<<" ";
//	}
	int temp=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==arr2[i]){
				i++;
				//cout<<"no";
				
				
		}
		else{
			if(arr.size()>arr2.size()){
				cout<<"Extra element is found in array1 ---> "<<arr[i];
				break;
			}
			else{
				cout<<"Extra element is found in array2 ---> "<<arr2[i];
				break;
			}
			
			//cout<<"hi";
		}
	}

	return 0;
}