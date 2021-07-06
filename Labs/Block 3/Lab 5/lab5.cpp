/*name: Kemal Demirgil
lab: 5
date: June22
abstract: If statements
*/

#include <iostream>
#include <cmath>

using namespace std;
const double gravity=9.8;

int main(){
double a=0;
double b=0;
double c=0;
double d=0;
double e=0;

cout<<"Enter Length of Rocket [n]:";
cin>>a;
cout<<"Enter Rocket Initial Velocity [m/s]:";
cin>>b;
c=b/gravity;
d=a+b*c-(.5*gravity*c*c);
e=(-b-(sqrt((b*b)-4*(-4.9)*a)))/(2*(-4.9));
printf("\n%.2lf",e);
printf("\n The rockets max height is %.2lf m		%.2lf s",d,c);
printf("\n\n time		height");
double f=0;
while (f<e+.1){
	double g;
	g=a+b*f-(.5*gravity*f*f);
	printf("\n%.2lf			%.2lf",f,g);
	f=f+0.1;
	
	
}
cout<<"\ngam3fac3"; 


           
            
            
            
            





//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause



return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

