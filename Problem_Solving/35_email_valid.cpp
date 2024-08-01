/*EMAIL VALIDATION

The email address must start with a letter (no numbers or symbols).
There must be an @ somewhere in the string that is located before the dot.
There must be text after the @ symbol but before the dot.
There must be a dot and text after the dot.
Examples:

Input: email = “review-team@geeksforgeeks.org” 
Output: Valid
Explanation:
The given string follow all the criteria for an valid email string.

Input: email = “contribute@geeksforgeeks..org”
Output: Invalid

String Traversal based Approach: Follow the steps below:

Check if the first character of the email id string is an alphabet or not. If not, then the email is Invalid.
Now traverse over the string email to find the position the “@” and “.” If “@” or “.” is not present then the email is Invalid.
If “.” is not present after “@” then the email is Invalid.
If “.” is the last character of the string email then the email id is Invalid.
Otherwise, the email is Valid.
*/
------------------------------------------------------------------------------------------
//REGEX:- 
/*
// C++ program for the above approach 

#include <iostream> 
#include <regex> 
using namespace std; 

// Function to check the email id 
// is valid or not 
bool isValid(const string& email) 
{ 

	// Regular expression definition 
	const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"); 

	// Match the string pattern 
	// with regular expression 
	return regex_match(email, pattern); 
} 

// Driver Code 
int main() 
{ 
	// Given string email 
	string email 
		= "review-team@geeksforgeeks.org"; 

	// Function Call 
	bool ans = isValid(email); 

	// Print the result 
	if (ans) { 
		cout << email << " : "
			<< "valid" << endl; 
	} 
	else { 
		cout << email << " : "
			<< "invalid" << endl; 
	} 
} 

*/

#include<iostream>
using namespace std;
int main(){
	string str="1bhuvanika@gmail.com";
	int at,dot;
	int flag=0,temp=0,flag1=0;
	if(isalpha(str[0])){
	for(int i=1;i<str.length();i++){
	
			
		if(str[i]=='@'){
			at=i;
			flag=1;
		}
		else if(str[i]=='.'){
			dot=i;
			flag1=1;
			
		}
		else{
			continue;
		}
	}
		if(dot>at){
			temp=1;
		}
		
	
}
else{
	cout<<"INVALID";
	return 0;
}
	
	if(temp==1&&flag==1&&flag1==1){
		cout<<"VALID";
	}
	else{
		cout<<"INVALID";
	}
	
	return 0;
}