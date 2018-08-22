// lib
#include <iostream>
using namespace std;

// main func.
int main(){

// declare variables - temperature_celsius, temperature_fahrenheit - float for decimals
	double t_c, t_f;
// terminal o/p
	cout << "\n\t\t\tTEMPERATURE CONVERTER - Farenheit to Celsius  \n\nEnter Temperature in Farenheit : ";
// terminal i/p
	cin >> t_f;
// conversion - C = 5*(F - 32)/9  
	t_c = (t_f - 32)*5/9;
// terminal o/p
	cout << "\nTemperature in Celsius is " << t_c <<"C \n\n";

	return 0;
}
