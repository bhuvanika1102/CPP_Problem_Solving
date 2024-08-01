/*

consider the given array as tree(binary tree).
i want to print the end node of each level.
modify it and give
             1
			/ \
		   2   3
		  /\   /\
		  4 5  6 7
		  /
		  8
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	vector<int> tree={1,2,3,4,5,6,7,8};
	int n=tree.size();
	int level=0;
	int index=0;
	while(index<n){
		int start=(1<<level)-1;
		int end=(1<<(level+1))-2;
		if(end>=n){
			break;
		}
		cout<<tree[end]<<" ";
		level++;
		index=(1<<level)-1;
	}
	return 0;
}