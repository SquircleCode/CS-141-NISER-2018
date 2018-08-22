// lib.
#include <iostream>
using namespace std;
// main func.
int main(){
// declare variables - days_in, days, weeks, year - integers. no use of decimal.
	int d_in, d, w, y;
// terminal o/p
	cout<<"\n\t\t\tDAYS TO YEARS, WEEKS AND DAYS\n\nEnter Number of days : ";
// terminal i/p
	cin>>d_in;
// conversion - 365 days = 1 year, 7 days = 1 week
	y = d_in/365;
	w = (d_in%365)/7;
	d = ((d_in%365)%7);
// terminal o/p
	cout <<"\n"<<d_in<<" days equals to "<<y<<" years, "<<w<<" weeks, "<<d<<" days. \n\n"<<endl;
	return 0;
}
