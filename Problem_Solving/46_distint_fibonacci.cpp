#include<iostream>
using namespace std;
int main(){
	int n=20 ,num=19;
	int arr[n]={1,1};	
	for(int i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(int i=n;i>0;i--){
		if(arr[i]<=num){
			cout<<arr[i]<<" ";
			num=num-arr[i];
			
		}
	}
	return 0;
}



//*********************without using array or stl***************************
//#include<iostream>
//using namespace std;
//
//void res(int n){
//	int l=0,k=1,h,i;
//	for(i=0;i<n;i++){
//		h=l+k;
//		if(h>n){
//			h=h-l;
//			cout<<h<<"+";
//			n=n-h;
//			res(n);
//		}
//		else if(h==n){
//			cout<<h;
//			break;
`
//		else{
//			l=k;
//			k=h;
//		}
//	}
//}
//int main(){
//	
//	int n;
//	cin>>n;
//	res(n);
//	
//}