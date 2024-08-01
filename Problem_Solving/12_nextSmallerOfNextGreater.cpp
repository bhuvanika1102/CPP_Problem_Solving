#include<iostream>
#include<vector>
using namespace std;

void nextSmallerOfNextGreater(int arr[], int n)
{
	   vector<int> vec;
	for(int i=0;i<n-1;i++){
		
		int temp=arr[i];
		int next=-1;
		int ans=-1;
		for(int j=i+1;j<n;j++){
		if(arr[j]<temp){
			next=j;
			break;
		} 
		
		}
		
		if(next==-1){vec.push_back(-1);}
		else{
		for(int j=next+1;j<n;j++){
			if(arr[j]>arr[next]){
				ans=j;
				break;
			} 
		}
		if(ans==-1){vec.push_back(-1);}
		else{vec.push_back(arr[ans]);}
		}
		
	}
	
	vec.push_back(-1);
	for(auto x: vec){
		cout<<x<<" ";
	}
	cout<<endl;
}

// Driver program
int main()
{
	int arr[] = {5, 1, 9, 2, 5, 1, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	nextSmallerOfNextGreater(arr, n);
	return 0;
}
