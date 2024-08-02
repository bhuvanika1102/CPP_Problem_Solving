#include<iostream>
#include<vector>
using namespace std;
int main(){
	string str1="abbeddefcceacbbed";
	string str2="abbcfiefcceacbijd";
	vector<pair<string,string>> vec;
	if(str1.length()!=str2.length()){
		cout<<"give proper input";
	}
	else{
		
		int i=0;
		while(i<str1.length()){
			int i1=0;
			if(str1[i]!=str2[i]){
				string match1="";
			    string match2="";
			    
				while(i < str1.length() && str1[i]!=str2[i]){
					match1+=str1[i];
					match2+=str2[i];
					i++;
				}
				vec.push_back(make_pair(match1,match2));

			}
			else{
				i++;
			}
		}
	}
	for(const auto&x:vec){
		cout<<x.first<<","<<x.second<<endl;
	}
	return 0;
}