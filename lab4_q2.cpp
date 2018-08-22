// lib
#include <iostream>
using namespace std;

// main func.
int main(){

// declare variables - temperature_celsius, temperature_fahrenheit - float for decimals
	double t_c, t_f;
// terminal o/p
	cout << "\n\t\t\tTEMPERATURE CONVERTER - Celsius to Farenheit \n\nEnter Temperature in Celsius : ";
// terminal i/p
	cin >> t_c;
// conversion -  F = 1.8*C + 32 
	t_f = (1.8*t_c) + 32;
// terminal o/p
	cout << "\nTemperature in Farenheit is " << t_f <<"F \n\n";

	return 0;
}
