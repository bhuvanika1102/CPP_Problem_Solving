#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s){
	int left=0;
	int right=s.size()-1;
	while(left<=right){
		swap(s[left],s[right]);
		left++;
		right--;
	}
}
int main(){
	vector<char> str={'h','e','l','l','o'};
	reverseString(str);
	for(char x:str){
		cout<<x<<" ";
	}
	return 0;
}