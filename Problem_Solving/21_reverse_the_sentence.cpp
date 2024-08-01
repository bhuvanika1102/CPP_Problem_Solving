#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<char> reverse1(stack<char>& arr){
  vector<char> vec;
  while(!arr.empty()&&arr.top()!='.'){
     char x=arr.top();
     vec.push_back(x);
     arr.pop();
   }
    if (!arr.empty()) {  // Pop the dot
        arr.pop();
    }
   reverse(vec.begin(),vec.end());
   return vec;
}

int main() 
{
    string str="one.two.three";
    stack<char> arr2;
    for(int x:str){
      arr2.push(x);
    }
    vector<char> vec2;
    while(!arr2.empty()){
      vector<char> temp=reverse1(arr2);
      vec2.insert(vec2.end(),temp.begin(),temp.end());
    }
    for(char x5:vec2){
      cout<<x5;
    }
    return 0;
}
