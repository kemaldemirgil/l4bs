/*name: Kemal Demirgil
lab:8
date:August 9,2017	
abstract:
*/
//gam3fac3..........................................................................................

#include <iostream>
#include <cmath>
using namespace std;

double Calc (double x){;
double tempF=(9.0/5.0)*x+32.0;
return tempF;
}
int main() {
	double tempC=0.0,Temp;
	cout<<"Please enter a temperature in Degrees Celcius->";
	cin>>tempC;
	Temp=Calc(tempC);
	cout<<"Equiuvalent temperature in degrees Fahrenheit is->"<<Temp<<"\n";
	cout<<"Please continue to the next program...\n";
	cout<<"Welcome to the Parallel Resistance Circuit Solver\n";
	cout<<"Enter a value for Volts->";
	double V;
	cin>>V;
	cout<<"Enter a value for R1->";
	double R1;
	cin>>R1;
	cout<<"Enter a value for R2->";
	double R2;
	cin>>R2;
	cout<<"Enter a value for R3->";
	double R3;
	cin>>R3;
	double RP;
	RP=1/(1/R1 + 1/R2 + 1/R3);
	cout<<"Resistance is->"<<RP<<"\n";
	double I;
	double TR;
	TR=R1+R2+R3;
	I=V/TR;
	cout<<"Total Current is->"<<I<<"\n";
	
	
	
	
























	cout << "\ngam3fac3\n";














	return 0;


}
