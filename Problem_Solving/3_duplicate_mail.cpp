/*
The principal has a problem with repetitions.
 Everytime someone sends the same email twice he becomes angry and starts yelling. 
 His personal assistant filters the mails so that all the unique mails are sent only once, 
 and if there is someone sending the same mail again and again, he deletes them. Write a program which will see the list of roll numbers of the student and find how many emails are to be deleted.
Sample Input:
6
1	
3
3
4
3
3
Sample Output:
3

*/




#include<iostream>
#include<set>
#include<array>
using namespace std;
int main(){
    
    int arr[]={1,6,6,3,3,4,4,3,3,3};
    set<int> arr2;
    for(int x:arr){
        arr2.insert(x);
    }
    // for(int x1:arr2){
    //     cout<<x1<<" ";
    // }
    int arr_length=end(arr)-begin(arr);
    int arr2_length=arr2.size();
    int total=arr_length-arr2_length;
    cout<<total;
    return 0;
    
}

