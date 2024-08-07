/*
Given two strings A and B, find if A is a subsequence of B.

Example 1:

Input:
A = AXY 
B = YADXCP
Output: 0 
Explanation: A is not a subsequence of B
as 'Y' appears before 'A'.
 

Example 2:

Input:
A = gksrek
B = geeksforgeeks
Output: 1
Explanation: A is a subsequence of B.*/

#include<iostream>
using namespace std;
bool issequence(string str1,string str2){
	int chk=0;
	for(int i=0;i<str2.length();i++){
		if(str1[chk]==str2[i]){
			chk++;
			if(chk=str1.length()){
				return true;
			}
		}
	}
	return false;
}
int main(){
	string str1="gksrek";
	string str2="geeksforgeeks";
	cout<<issequence(str1,str2);
	return 0;
}