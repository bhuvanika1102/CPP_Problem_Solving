#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int student=100;//n
	vector<bool> locker(student,false);//all locker in locked state
	for(int i=1;i<=student;i++){
		for(int j=i;j<=student;j+=i){
			locker[j-1]=!locker[j-1];
		}
	}
	for(int i=0;i<student;i++){
		cout<<"locker"<<(i+1)<<":"<<(locker[i]?"open":"close")<<endl;
	}
	return 0;
}