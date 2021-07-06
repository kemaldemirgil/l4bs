/*name: Kemal Demirgil
lab: 6
date: June 24
abstract: mesurements
*/

#include <iostream>
#include <cmath>
int main ()
{
using namespace std;

double voltage,res,cap,timeMax,time,CapVolt,ResVolt,ResI,CapI,T;

cout<<"Welcome to the RC Series Circuits Calculator.\nPlease enter the following;\n";   
cout<<"Enter Voltage --> \n";
cin>>voltage;
cout<<"Enter Resistor --> \n";
cin>>res;
cout<<"Enter Capacitor --> \n";           
cin>>cap;            
cout<<"Time			CapVolt			ResVolt			CapI		ResI\n";           
T=res*cap;
timeMax= 5*T; 
time=0.001;
while(time<=timeMax){
	CapVolt=voltage*(1-(exp(-time/T)));
	ResVolt=voltage-CapVolt;
	CapI=(voltage/res)*(exp(-time/T));
	ResI=CapI;
	cout<<time<<"		"<<CapVolt<<"		"<<ResVolt<<"		"<<CapI<<"		"<<ResI<<"\n";
	time=time+0.001;

} 
cout<<"\ngam3fac3";           
            
            

	






//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause



return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

