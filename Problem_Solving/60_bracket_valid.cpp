#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;
int main(){
	string str="([)])";
	stack<char> stk;
	int flag=1;
	unordered_map<char,char> matching={{']', '['},
                                          {'}', '{'},
                                          {')', '('}};
	for(char x:str){
		if(x=='('||x=='{'||x=='['){
			stk.push(x);
		}
		else{
			if(stk.empty()||stk.top()!=matching[x]){
				flag=0;
				break;
			}
			stk.pop();
			
			
		}
	}
	if (!stk.empty()) {
        flag=0;;
    }
	if(flag==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}