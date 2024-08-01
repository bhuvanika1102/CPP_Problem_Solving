
/*
Given a variety of coin types defining a currency system, find the minimum number of coins required to express a given amount of money. 
Assume an infinite supply of coins of every type. Example Input: Coin types: [1, 3, 5].
 Amount to express: 9. Output: 3 Here are all the unique ways to express 9 as a sum of coins 1, 3 and 5:
  1, 1, 1, 1, 1, 1, 1, 1, 1 1, 1, 1, 1, 1, 1, 3 1, 1, 1, 1, 5 1, 1, 1, 3, 3 1, 3, 5 3, 3, 3 
  Last two ways use the minimal number of coins, 3. Notes: Every input will include a coin of value 1.
   This guarantees that a solution will always exist.
Input Format
Input:
1, 3, 5
9
Constraints
Constraints: ? There will be no duplicate coin types in the input.
Output Format
output: 3

//*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n=3;
	int notes[n]={10,2,1};
	int count[n]={0};
	int target=15;
	int sum=0;
	for(int i=0;i<n;i++){
		if(target>=notes[i]){
			count[i]=target/notes[i];
			target=target%notes[i];
			
		}
	}

	for(int i=0;i<n;i++){
		sum=sum+count[i];
	}
	cout<<sum;

	return 0;
}

//VIRUS
//----------
//#include<iostream>
//using namespace std;
//int factor(int a[],int t)
//{
//        int count=0;
//        for(int i=0;i<2;i++)
//        {
//                if(t%a[i]==0)
//                {
//                        while(t>0)
//                        {
//                                t=t-a[i];
//                                count++;
//                        }
//                        break;
//                }
//        }
////      cout<<count;
//        return count;
//}
//int high(int a[],int t)
//{
//        int count=0;
//        for(int i=0;i<2;i++)
//        {
//                if(t-a[i]>=0)
//                {
//                        while(t-a[i]>=0)
//                        {
//                                t=t-a[i];
////                              cout<<t<<" ";
//                                count++;
//                        }
//                }
//        }
//        return count;
//}
//
//int main()
//{
//        int a[2]={3,1};
//        int target=15;
//        if(factor(a,target)>high(a,target))
//        {
//                cout<<high(a,target);
//        }
//        else{
//                cout<<factor(a,target);
//        }
//
//
//
//}