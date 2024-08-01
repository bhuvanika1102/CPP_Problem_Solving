#include<iostream>
using namespace std;
int main(){
  int arr[5]={1,2,5,4,3};
  int count=0;
  int arrlength=end(arr)-begin(arr);
  for(int i=0;i<arrlength;i++){
    for(int j=i+1;j<arrlength;j++){
      for(int k=i+2;k<arrlength;k++){
        if(arr[i]<arr[j] && arr[j]>arr[k] ){
          cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
          count++;
        }
      }
    }
  }
  cout<<"number of possible triplets are : "<<count;
  return 0;
}

