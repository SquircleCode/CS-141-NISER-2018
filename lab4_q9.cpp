//lib
#include <iostream>
using namespace std;

// main func.
int main(){
// declare variables principal, time period, rate, simple interest -float  -can be in decimals
	float p,t,r,si;
// terminal o/p 
	cout<<"\nEnter the principal, time period, rate of interest one by one after pressing enter or return : \n";
// terminal i/p p,t,r
	cin >>p>>t>>r;
// calc - si = p*t*r/100
	si = p*t*r/100;
// terminal o/p result
	cout<<"The Simple Interest is "<<si<<endl;

	return 0;
}
