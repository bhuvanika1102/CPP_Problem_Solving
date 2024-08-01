/*
Problem
Bob has a playlist of ?? songs, each song has a singer associated with it (denoted by an integer)
Favourite singer of Bob is the one whose songs are the most on the playlist
Count the number of Favourite Singers of Bob
Input Format 
The first line contains an integer ??, denoting the number of songs in Bob's playlist.
The following input contains ?? integers, ????h integer denoting the singer of the ????h song.
Output Format
Output a single integer, the number of favourite singers of Bob
Note: Use 64 bit data type
Constraints
1=??=2*1051=??[??]=1015
Sample Input
5
1 1 2 2 4
Sample Output
2
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In this example
Songs of singer 1 and 2 appear 2 times(which is max) in this playlist 
Therefore the answer is 2

*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include<algorithm>

using namespace std;

void findFrequency(const vector<int>& arr,int len) {
    unordered_map<int, int> m;
    
    for(int num : arr) {
        m[num]++;
    }
    // cout << "Element  Frequency" << endl; 
    // for (auto i = m.begin(); i != m.end(); i++) 
    //     cout << i->first << " \t\t\t" << i->second << endl;
int max_element =arr[0];
 int max_freq=0;
 for(auto i=m.begin();i!=m.end();i++){
   if(i->second > max_freq){
     max_freq=i->second;
     max_element=i->first;
   }
 }
 if(max_freq==1){
   cout<<len;
 }
 else{
cout<<max_freq;
 }
 
}

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    findFrequency(arr,n);

    return 0;
}

