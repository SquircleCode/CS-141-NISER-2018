//lib
#include <iostream>
using namespace std;

// main func.
int main(){
// declare variables m1,m2,m3,m4,m5, total, avg, percentage, maximum_marks -float  -can be in decimals
	float m1,m2,m3,m4,m5,tot,avg,per, mm;
// terminal o/p and i/p for max marks
	cout<<"\nEnter the maximum marks for the subjects : ";
	cin>>mm;
// terminal o/p - marks
	cout<<"\nEnter the marks of the 5 subjects one by one after pressing enter or return : \n";
// terminal i/p 
	cin >> m1>>m2>>m3>>m4>>m5;
// calc - basic arithmetic
	tot = m1+m2+m3+m4+m5;
	avg = tot/5;
	per = tot*100/(5*mm);
// terminal o/p result
	cout<<"The total is "<<tot<<", the average is "<<avg<<", the percentage is " <<per<<"% \n";

	return 0;
}
