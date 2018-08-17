//Import libraries.
#include <iostream>
using namespace std;
//main function
int main(){
// decleration of primitve datatypes
// boolean , int , float, double, char
	bool b = true;
	int i = 1;
	float f = 1.01;
	double d = 1.000000001;
	char c = 'a'; 
// output of values
	cout << "\n\nVALUES STORED IN: \nboolean b = " << b << "\nint i = " << i << "\nfloat f = " << f << "\ndouble d = " << d << "\nchar c = " << c << endl ;
// out out of datatype size
	cout << "\n\nSIZE OF \nboolean is " << sizeof(b) << " bytes\nint is " << sizeof(i) << " bytes\nfloat is " << sizeof(f) << " bytes\ndouble is " << sizeof(d) << " bytes\nchar is " << sizeof(c)<< " bytes\n"<< endl;	

}


