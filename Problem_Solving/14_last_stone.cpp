/*
You are given an array of integers stones where stones[i] is the weight of the ith stone.
We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. 
Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:
•	If x == y, both stones are destroyed, and
•	If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
At the end of the game, there is at most one stone left.
Return the weight of the last remaining stone. If there are no stones left, return 0.
 
Example 1:
Input: stones = [2,7,4,1,8,1]
Output: 1
Explanation: 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.
Example 2:
Input: stones = [1]
Output: 1
 
Constraints:
•	1 <= stones.length <= 30
•	1 <= stones[i] <= 1000
*/






/*	****************BAsED ON PRIORITY QUEUE************************************
#include <iostream>
#include <vector>
#include <queue> // for priority_queue
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    // Max heap (priority queue)
    priority_queue<int> maxHeap;

    // Populate the max heap with all stones
    for (int stone : stones) {
        maxHeap.push(stone);
    }

    // Smash stones until there's at most one left
    while (maxHeap.size() > 1) {
        int y = maxHeap.top();  // Get the heaviest stone
        maxHeap.pop();
        int x = maxHeap.top();  // Get the second heaviest stone
        maxHeap.pop();

        if (x != y) {
            maxHeap.push(y - x); // New stone after smashing
        }
        // If x == y, both stones are destroyed
    }

    // Return the weight of the last remaining stone or 0 if none left
    return maxHeap.empty() ? 0 : maxHeap.top();
}

int main() {
    vector<int> stones1 = {2, 7, 4, 1, 8, 1};
    cout << "Last stone weight: " << lastStoneWeight(stones1) << endl; // Output: 1

    vector<int> stones2 = {1};
    cout << "Last stone weight: " << lastStoneWeight(stones2) << endl; // Output: 1

    return 0;
}
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      while(stones.size()>1){
        sort(stones.begin(),stones.end(),greater<int>());
        int frst=stones[0];
        int sec=stones[1];
        int diff=frst-sec;
        stones.erase(stones.begin());
        stones.erase(stones.begin());
        if(diff>0){
          stones.push_back(diff);
        }
      }
      return stones.empty()?0:stones[0];
    }
};
    
 int main(){
   vector<int> stones = {2, 7, 4, 1, 8, 1};
     Solution sol;
     int result = sol.lastStoneWeight(stones);
     cout << result << endl;

     return 0;
 }
