#include<iostream>
#include<set>
using namespace std;

int main() 
{
    int arr[]={2,4,5,6,7,9,10,13};
    int arr1[]={2,3,4,5,6,7,8,9,11,15};
    set<int> arr2;
    for(int x:arr){
      arr2.insert(x);
    }
    for(int y:arr1){
      arr2.insert(y);
    }
    for(auto i=arr2.begin();i!=arr2.end();i++){
      cout<< *i<<" ";
    }
    return 0;
}
