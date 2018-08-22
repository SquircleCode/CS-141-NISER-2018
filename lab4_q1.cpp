//import libraries
#include <iostream>
#include <math.h>
using namespace std;

//main method
int main(){

//declare variables - length_centimeter, length_meter,length_kilometer - double as 1cm = 10^(-5)m
	double l_cm,l_m,l_km;
// terminal o/p 
	cout<<"\n\t\t\tLENGTH UNIT CONVERTER - cm to m,km\n\nEnter the length in centimeters : ";
// terminal i/p -> length_centimeter
	cin>>l_cm;
// conversion into meter and km. 1 m = 100cm, 1km = 1000m
	l_m= l_cm * pow(10,-2);
	l_km= l_cm * pow(10,-5);
// terminal o/p -> length_meter,length_centimeter
	cout<< "\nThe length in meters is " << l_m<<"m and the length in kilometers is "<<l_km<<"km \n"<<endl;

	return 0;
}
