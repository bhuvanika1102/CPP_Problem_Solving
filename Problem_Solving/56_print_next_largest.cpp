#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	
	int arr[5]={8,3,2,5,9};
	vector<int> num;
	int len=end(arr)-begin(arr);
	for(int i=0;i<len;i++){
		num.push_back(arr[i]);
	}
	sort(num.begin(),num.end());
	for(int i=0;i<len;i++){
		for(int j=0;j<num.size();j++){
			if(arr[i]==num[j]){
			if(j==num.size()-1){
					cout<<arr[i]<<"-->"<<endl;
				}
				else{
					cout<<arr[i]<<"-->"<<num[j+1]<<endl;
				}
				break;
			}
		
		}
		
	}
	return 0;
}