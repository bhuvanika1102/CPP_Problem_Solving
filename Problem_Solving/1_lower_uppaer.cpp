/*
You have been given a String S consisting of uppercase and lowercase English alphabets. 
You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase 
and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
---------------
The first and only line of input contains the String S

Output Format
---------------
Print the resultant String on a single line.

Constraints
-----------
1=|??|=100 where S denotes the length of string S.

Sample Input
abcdE
Sample Output
ABCDe
*/
#include<iostream>
using namespace std;
int main(){
    string str="abcdE";
    for(char x:str){
        if(islower(x)){
            x=toupper(x);
            cout<<x;
        }
        else{
            x=tolower(x);
            cout<<x;
        }
    }
    return 0;
}