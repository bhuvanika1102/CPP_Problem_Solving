//9.	Given a time in 12-hour AM/PM format, convert it to military (24-hour) time. Don’t use inbuilt functions.
#include <iostream>
using namespace std;
void convert_military(int hour,string am_pm){
	if(am_pm=="PM"){
		hour=hour+12;
		cout<<hour;
	}
	else{
		cout<<hour;
	}
}
int main(){
	int hour,min;
	string am_pm;
	cout<<"Enter the hour(in ISD format):  ";
	cin>>hour;
	cout<<"Enter the minutes(in ISD format): ";
	cin>>min;
	cout<<"Enter AM/PM: ";
	cin>>am_pm;
	cout<<"The time is : ";
	convert_military( hour, am_pm);
	cout<<" hours  "<<min<<" minutes!";
	return 0;
}