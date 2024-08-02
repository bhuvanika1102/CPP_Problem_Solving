#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//vector<pair<int,int>> mergedintervals(vector<pair<int,int>> interval){
//		return vec;
//}
int main(){
	vector<pair<int,int>> vec={{1,3},{8,10},{15,18},{2,6},{14,16},{7,9}};
	sort(vec.begin(),vec.end());
	vector<pair<int,int>> merged;
	merged.push_back(vec[0]);
	for(size_t i=1;i<vec.size();i++){
		auto& lastinterval=merged.back();
		if(lastinterval.second>=vec[i].first){
			lastinterval.second=max(lastinterval.second,vec[i].second);
		}
		else{
			merged.push_back(vec[i]);
		}
	}
	for(const auto& x:merged){
		cout<<"["<<x.first<<","<<x.second<<"]"<<endl;
	}
	return 0;
}