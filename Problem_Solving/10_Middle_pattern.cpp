#include <iostream>
#include <vector>

using namespace std;

int main() {
	string str="BHUVANIKA";
	int len=str.length();
	int mid=(len/2);
	int mid1=mid;	
	vector<char> vec;
	for(int i=0;i<len;i++){
		for(int j=0;j<len-i-1;j++){
			cout<<" ";
		}
		for (int j = mid; j <= mid + i; j++) {
            cout<<str[j];
        }	
		if(i>=mid+1){
			for(int j=0;j<=i-(mid+1);j++){
			cout<<str[j];
		}
	}
		cout<<endl;
}
    return 0;
}
