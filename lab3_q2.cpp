// Import libraries
#include <iostream>
using namespace std;
// Main function
int main(){
// declaration of variables int/float
	int i;
	float f;
// intitializing variables- assigning values
	i = 25;
	f = 2.2000;
// arithmetic operations - + - * / %
// display individually. 
// instead of storing values and displaying them, do calc in cout.
	cout<< "\nArithmetic Operations:\ni -> integer, i = "<<i<< "\nf -> float, f = "<< f << "\n\ni+f = " << i+f << "\nf-i = " << f-i << "\ni*f = " << i*f << "\ni/f = " << i/f << "\nrem(f/i) = " << ((int)f)%i <<"\n" <<endl;
	return 0;
}
