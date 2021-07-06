/*name: kemal demirgil
lab: 1
date: May 10
abstract: inputs, outputs, basic math
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

int pause; // initializing a variable for pausing the program once it has been executed
int x,y,z;//declare first variable
x=5;
cout<<"the variable x is "<< x <<"\n";
x=10;// assigning a value to a variable
cout<<"x is "<<x<<"\n";
cout<<"please input a new value for x followed by enter";
cin>> x;
cout<<"x is now " <<x<<"\n";
cout<<"please enter a value for y followed by enter";
cin>> y;
z=x+y;
cout <<"z is x+y which is "<<z;



cout<<"you're a towel\n";// This is the output command
cout<<"wanna get high?";// \n is new line \t is a tab space
cout<<"hello";
cout<<"\n";
cout<<"hello";

















//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

