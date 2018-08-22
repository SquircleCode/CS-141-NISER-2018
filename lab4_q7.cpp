//lib
#include <iostream>
#include <math.h>
using namespace std;

// main func.
int main(){
// declare variables side,area -float -lengths
	float s,A;
// terminal o/p
	cout<<"\nEnter the length of the side of the equilateral triangle : ";
// terminal i/p side
	cin >> s;
// calc - area = 0.25*sqrt(3)*s*s; 
	A=0.25*sqrt(3)*s*s;
// terminal o/p
	cout<<"\nThe area of the triangle is "<<A<<endl<<endl;

	return 0;
}
