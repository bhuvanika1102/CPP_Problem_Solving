#include <iostream>
using namespace std;

int main() 
{
    int n=6;
    int count=1;
    for(int i=0;i<6;i++){
         int num=count;
      for(int j=0;j<n-i;j++){
        cout<<num<<" ";
        num+=n-j;
      }
      count++;
      
      cout<<endl;
    }
    return 0;
}
