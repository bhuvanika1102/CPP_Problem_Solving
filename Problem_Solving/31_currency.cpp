#include<iostream>
//#include<set>
#include<algorithm>
using namespace std;
int main(){
//	set<int> num;
	int n=10;
	int notes[n]={1000,500,200,100,50,20,10,5,2,1};
	int count[n]={0};
	int target=2883;
	int sum=0;
	for(int i=0;i<n;i++){
		if(target>=notes[i]){
			count[i]=target/notes[i];
			target=target%notes[i];
//			num.insert(notes[i]);
			
		}
	}
	for(int i=0;i<n;i++){
		if(count!=0){
			cout<<notes[i]<<"--->"<<count[i]<<endl;
		}
	}
	for(int i=0;i<3;i++){
		sum=sum+count[i];
	}
	//cout<<sum;
//	cout<<num.size();
//	return 0;
}