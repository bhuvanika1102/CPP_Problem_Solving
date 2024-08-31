//LEETCODE 412. Fizz Buzz

#include<iostream>
#include<vector>
using namespace std;
vector<string> fizzBuzz(int n){
	vector<string> ans;
	for(int i=1;i<=n;i++){
		if(i%3==0&&i%5==0){
			ans.push_back("FizzBuzz");
		}
		else if(i%3==0){
			ans.push_back("Fizz");
		}
		else if(i%5==0){
			ans.push_back("Buzz");
		}
		else{
			ans.push_back(to_string(i));
		}
	}
	return ans;
}

int main(){
	int n=15;
	vector<string> result = fizzBuzz(n);
    
    for(const string& str : result) {
        cout << str << " ";
    }
    cout << endl;

    return 0;}

