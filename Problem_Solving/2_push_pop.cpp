/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can. Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
Input Format: First line contains number of test cases n Then subsequent n lines contains string S
Output: For each string S, print the output.
Constraint: 1<=|S|<=10^5
Sample Input
abbbacad
Sample Output
cad

*/
#include<iostream>
#include<stack>
using namespace std;
string duplicate(string str){
    stack<char> letter;
     for(char x:str){
        if(!letter.empty()&&letter.top()==x){
            letter.pop();
        }
        else{
            letter.push(x);
        }
    }
    string result=" ";
    while(!letter.empty()){
        result=letter.top()+result;
        letter.pop();
    }
    return result;
}
int main(){
    string str="abbacab";
    string result=duplicate(str);
    cout<<result;
    return 0;
}
