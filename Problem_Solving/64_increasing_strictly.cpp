/*******CHATGPT*********************

#include<iostream>
using namespace std;

bool isStrictlyIncreasing(int arr[], int n) {
    int mid = (n - 1) / 2;
    bool left_sorted = true, right_sorted = true;

    // Check if the left part is sorted in increasing order
    for (int i = 1; i <= mid; i++) {
        if (arr[i] <= arr[i - 1]) {
            left_sorted = false;
            break;
        }
    }

    // Check if the right part is sorted in decreasing order
    for (int i = mid + 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            right_sorted = false;
            break;
        }
    }

    return left_sorted && right_sorted;
}

int main() {
    int n = 6;
    int arr[n] = {0, 2, 3, 3, 5, 1};

    if (isStrictlyIncreasing(arr, n)) {
        cout << "strictly increasing";
    } else {
        cout << "not strictly increasing";
    }

    return 0;
}
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n=6;
	int arr[n]={6,7,8,9,6,7};
	int start=0,end=n-1,mid=(start+end)/2;
	int temp=1;
	int flag=1;
//	cout<<mid;
	vector<int> vec1,vec2;
	for(int i=0;i<=mid;i++){
		vec1.push_back(arr[i]);
	}
	for(int j=mid+1;j<=n-1;j++){
		vec2.push_back(arr[j]);
	}
	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end(),greater<int>());
	for(int x:vec2){
		vec1.push_back(x);
	}
	for(int i=0;i<vec1.size();i++){
		if(arr[i]!=vec1[i]){
			temp=0;
		}
		else{
			flag=0;
		}
	}
	if(temp==1&&flag==0){
		cout<<"strictly increasing";
	}
	else{
		cout<<"no strictly increasing";
	}
	
	
	return 0;
}
/********************VIRUS************8

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>a={0,2,3,5,4,1};
	
	int flag;
	char sign='p';
	for(int i=0;i<a.size();i++)
	{
		if(sign=='p')
		{	
//			cout<<a[i];
			if(a[i]<a[i+1])
			{
				flag=0;
			}
			else
			{
				sign='n';
			
			}
		}
		else
		{
//			cout<<a[i];
			if(a[i-1]>a[i])
			{
				flag=0;
			}
			else{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		cout<<"yes";
	}
	else cout<<"no";
}*/
