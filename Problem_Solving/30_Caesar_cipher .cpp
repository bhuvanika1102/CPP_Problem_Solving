//MY LOGIC BUT PASSED ONLY FEW TEST CASES

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    string str;
//    getline(cin,str);
//    int target;
//    cin>>target;
//    vector<int> vec;
//    for(int x1:str){
//        vec.push_back(x1);
//    }
//   
//   vector<char> vec1;
//    if(target>=0){
//    for(char x2:vec){
//        if(x2==32 || x2==45){
//            vec1.puch_back(x2);
//        }
//        else{
//        vec1.push_back(x2+target);
//        }
//        }
//    for(char x3:vec1){
//        cout<<x3;
//    }
//    }
//    else{
//        cout<<"INVALID INPUT";
//    }
//    return 0;
//}
#include<iostream>
using namespace std;
string casercipher(string str,int target){
	string encrypt="";
	if(target<0){
		return "Invalid Input";
		
	}
	else{
		
		for(char x:str){
			if(isalpha(x)){
				char offset=islower(x)?'a':'A';
			    encrypt+=static_cast<char>((x-offset+target)%26+offset);
			}
			else if(isdigit(x)){
			 encrypt+=static_cast<char>((x-'0'+target)%10+'0');	
			}
			else{
				encrypt+=x;
			}
		
			}
		}
			return encrypt;
	}

int main(){
	string str;
	getline(cin,str);
	int target;
	cin>>target;
	string result=casercipher(str,target);
	cout<<result;
	return 0;
}
