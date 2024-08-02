#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool ismatch(const string &text,const string &pattern){
	int n=text.size();
	int m=pattern.size();
	vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
	dp[0][0]=true;
	for(int i=1;i<=m;i++){
		if(pattern[i-1]=='*')
			dp[0][i]=dp[0][i-1];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(pattern[j-1]=='*'){
				dp[i][j]=dp[i][j-1]||dp[i-1][j];
			}
			else if(pattern[j-1]=='?'||text[i-1]==pattern[j-1]){
				dp[i][j]=dp[i-1][j-1];
			}
		}
	}
return dp[n][m];
}
int main(){
	string text="mississippi";
	string pattern="m??*ss*p*";
	if(ismatch(text,pattern)){
		cout<<"yes,pattern matches with string";
	}
	else{
		cout<<"no,pattern doesn't matches with string'";
	}
	return 0;
}