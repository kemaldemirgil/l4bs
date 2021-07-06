/*name: Kemal Demirgil
lab: 4
date: May 31
abstract: If statements
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
double x;
int pause; // initializing a variable for pausing the program once it has been executed
   
cout<<"Please enter temperature in degrees Celcius -> ";
cin>>x;
cout<<"Temperature -> "<<x<<" Degrees Celcius\n";
if(x>=500){
	cout<<"Process has ended\n";}           
if(x<=499){
	cout<<"Process is continuing\n";
}            
cout<<"gam3fac3";          
            





//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

