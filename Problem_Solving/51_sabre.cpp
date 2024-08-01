#include<iostream>
#include<cmath>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
	int large=INT_MIN;
	int total;
	unordered_map<int ,pair<int,int>>  sum;
	vector<int> num={3,4,7,1,12,9};
	for(int i=0;i<num.size();i++){
		for(int j=i;j<num.size();j++){
			total=num[i]+num[j];
			if(sum.find(total)!=sum.end() && sum[total].first!=i && sum[total].second!=j){
				large=max(large,total);
			}
			else{
				sum[total]=make_pair(i,j);
			}
		}
	}
	cout<<large;
	return 0;
}