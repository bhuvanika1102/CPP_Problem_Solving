#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a="b3c6d155";
	char prev=' ';
	string temp=" ";
	for(int i=0;i<a.length();i++)
	{
		if(isalpha(a[i]))
		{
			prev=a[i];
		}
		else if(isdigit(a[i]))
		{
			temp=a[i];
			int k=i;
			while(1){
			
			if(isdigit(a[k+1]))
			{
				temp=temp+a[k+1];
				k++;
			}
			else{
				break;
			}
			i=k;
		}
			int n=stoi(temp);
			cout<<n<<"\n";
			for(int j=0;j<n;j++)
			{
				cout<<prev;
			}
			cout<<"\n";
		}

		}	
}