//lib
#include <iostream>
#include <math.h>
using namespace std;

// main func.
int main(){
// declare variables principal, time period, rate, compound interest -double  -can be in decimals, using pow()
	double p,t,r,ci;
// terminal o/p 
	cout<<"\nEnter the principal, time period, rate of interest one by one after pressing enter or return : \n";
// terminal i/p p,t,r
	cin >>p>>t>>r;
// calc - ci= p(1+r/100)^t - p
	ci= (p*pow((1+(r/100)),t)) - p;

// terminal o/p result
	cout<<"The compound Interest is "<<ci<<endl;

	return 0;
}
