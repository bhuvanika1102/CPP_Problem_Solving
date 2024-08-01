#include <iostream>
#include<stack>
using namespace std;

int main() 
{
    string str="bhuvanika";
    stack<char> vow;
    for(int x:str){
      if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        vow.push(x);
      }
    }
    for(int i=0;i<str.length();i++){
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        cout<<vow.top();
        vow.pop();
        
      }
      else{
        cout<<str[i];
      }
    }
    return 0;
}
