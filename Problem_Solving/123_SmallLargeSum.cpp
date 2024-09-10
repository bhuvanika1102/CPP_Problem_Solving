#include<iostream>
using namespace std;
int SmallLargeSum(int arr[],int n){
	int omax1,omax2,emax1,emax2;
	if(n<=3){
			return 0;
		}
	if(arr[0]>arr[2]){
		emax1=arr[0];
		emax2=arr[2];
	}
	else{
		emax1=arr[2];
		emax2=arr[0];
	}
	if(arr[1]>arr[3]){
		omax1=arr[1];
		omax2=arr[3];
	}
	else{
		omax1=arr[3];
		omax2=arr[1];
	}
	for(int i=4;i<n;i++){
		if(i%2==0){
			if(arr[i]>emax1){
				emax2=emax1;
				emax1=arr[i];
			}
			else if((arr[i]<emax1&&arr[i]>emax2)||arr[i]==emax1){
				emax2=arr[i];
			}
		}
		else{
			if(arr[i]>omax1){
				omax2=omax1;
				omax1=arr[i];
			}
			else if((arr[i]<omax1&&arr[i]>omax2)||arr[i]==omax1){
				omax2=arr[i];
		}	
	}
}
return omax2+emax2;
}
int main(){
	int arr[6]={3,2,1,7,5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<SmallLargeSum(arr,n);
	return 0;
}