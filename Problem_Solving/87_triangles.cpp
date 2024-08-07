#include<iostream>
#include<unordered_set>
using namespace std;
int sec_max(int array[5],int i,int j,int k){
	if(array[i]>array[j]&&array[j]<array[k]){
		return array[j];
	}
	else if(array[j]>array[k]&&array[k]<array[i]){
		return array[k];
	}
	else{
		return array[i];
	}
}
int main(){
    int n=5;
	int arr[n]={6, 4, 9, 7, 8};
    
    unordered_set<string> seenpair;
    int count=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        	for(int k=j+1;k<n;k++){
             if(arr[i]+arr[j]>arr[k]&&arr[j]+arr[k]>arr[i]&&arr[i]+arr[k]>arr[j]) {
             	count++;
               
			}
            
        }
    }
}
    cout<<count;
    return 0;
}  