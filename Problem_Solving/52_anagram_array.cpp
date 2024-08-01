/*
Sure! Let's break down each step of the C++ program with the example ["eat","tea","tan","ate","nat","bat"].

Step-by-Step Explanation
Initialization:

We define a function groupAnagrams that takes a vector of strings as input.
We initialize an unordered map anagramGroups to store the sorted string as the key and a vector of strings (anagrams) as the value.
Processing Each String:

We iterate through each string in the input array.
Example: ["eat","tea","tan","ate","nat","bat"]
First Iteration:

String: "eat"
Sorted: "aet"
Map Update: {"aet": ["eat"]}
Second Iteration:

String: "tea"
Sorted: "aet"
Map Update: {"aet": ["eat", "tea"]}
Third Iteration:

String: "tan"
Sorted: "ant"
Map Update: {"aet": ["eat", "tea"], "ant": ["tan"]}
Fourth Iteration:

String: "ate"
Sorted: "aet"
Map Update: {"aet": ["eat", "tea", "ate"], "ant": ["tan"]}
Fifth Iteration:

String: "nat"
Sorted: "ant"
Map Update: {"aet": ["eat", "tea", "ate"], "ant": ["tan", "nat"]}
Sixth Iteration:

String: "bat"
Sorted: "abt"
Map Update: {"aet": ["eat", "tea", "ate"], "ant": ["tan", "nat"], "abt": ["bat"]}
Building the Result:
After processing all strings, we have the map:
json
Copy code
{
  "aet": ["eat", "tea", "ate"],
  "ant": ["tan", "nat"],
  "abt": ["bat"]
}
We then iterate over the map and collect all vectors of anagrams into the result vector.
Result Construction:

Map Entry: {"aet": ["eat", "tea", "ate"]}
Add ["eat", "tea", "ate"] to the result.
Map Entry: {"ant": ["tan", "nat"]}
Add ["tan", "nat"] to the result.
Map Entry: {"abt": ["bat"]}
Add ["bat"] to the result.
Final Result: [['eat', 'tea', 'ate'], ['tan', 'nat'], ['bat']]



GROUP ANAGRAM
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<string>> anagram( vector<string>& str){
	
	unordered_map<string,vector<string>> anagram_group;
	for(auto& x:str){
		string sorted=x;
		sort(sorted.begin(),sorted.end());
		anagram_group[sorted].push_back(x);
	}
	vector<vector<string>> result;
	for(auto& Y:anagram_group){
		result.push_back(Y.second);
	}
	return result;
}
int main(){
	vector<string> str = {"eat","tea","tan","ate","nat","bat"};

	vector<vector<string>> result1=anagram(str);
	for(auto&X:result1){
//		cout<<X<<" ";
		cout<<"[";
		for(auto&Y:X){
			cout<<Y<<" ";
		}
		cout<<"]";
	}
	return 0;
}