//lib
#include <iostream>
using namespace std;

// main func.
int main(){
// declare variables a,b,c -float -angles
	float a,b,c;
// terminal o/p
	cout<<"\nEnter the two angles of(in degrees) on by one after pressing enter or return : \n";
// terminal i/p var1 ->a
	cin >> a;
// terminal i/p var2 ->b
	cin >> b;
// calc - sum of angles = 180 degrees for a triangle
	c=180-a-b;
// terminal o/p
	cout<<"\nThe thrid angle is "<<c<<endl<<endl;

	return 0;
}
