//LEETCODE 202. Happy Number
#include<iostream>
#include<unordered_set>
using namespace std;
bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int sum = 0;
            while (n > 0) {
                int rem = n % 10;
                n /= 10;
                sum += rem * rem;
            }
            n = sum;
        }
        
        return n == 1;
    }
int main(){
	int num=2;
	cout<<isHappy(num);
	return 0;
}