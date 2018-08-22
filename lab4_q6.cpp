//lib
#include <iostream>
using namespace std;

// main func.
int main(){
// declare variables h,b,area -float -lengths
	float h,b,A;
// terminal o/p
	cout<<"\nEnter the base and the height of a triangle on by one after pressing enter or return : \n";
// terminal i/p base
	cin >> b;
// terminal i/p height
	cin >> h;
// calc - area = 0.5 * base*height; 
	A=0.5 * b* h;
// terminal o/p
	cout<<"\nThe area of the triangle is "<<A<<endl<<endl;

	return 0;
}
