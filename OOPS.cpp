#include <iostream>
using namespace std;

int  main()
{
	int hours;
	int minutes;
	int seconds;
	cout<<"Enter time in hours ";
	cin>>hours;
	cout<<"Enter time in minutes ";
	cin>>minutes;
	cout<<"Enter time in seconds ";
	cin>>seconds;
	cout<<"You entered time  "<<hours<<":"<<minutes<<":"<<seconds<<endl;
	int tot_seconds=hours*3600+minutes*60+seconds;
	cout<<"Time in seconds "<<tot_seconds;
	return 0;
}
