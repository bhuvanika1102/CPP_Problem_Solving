#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){

	int arr[4][2]={{1,5},{3,7},{6,8},{2,9}};

	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			if(arr[i][0]>arr[j][0]){
				int t=arr[i][0];
				int t1=arr[i][1];
				 arr[i][0]=arr[j][0];
				 arr[i][1]=arr[j][1];
				 arr[j][0]=t;
				 arr[j][1]=t1;
			}
			
		}
	}
	int index=0;
	for( int i=1;i<4;i++){
		if(arr[index][1]>arr[i][0]){
			arr[index][1]=max(arr[index][1],arr[i][1]);
		}
		else{
			index++;
			arr[index][0] = arr[i][0];
			arr[index][1]=arr[i][1];

//			arr[i][0]=
		}
	}
	for(int i=0;i<=index;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}