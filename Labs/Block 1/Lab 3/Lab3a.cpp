/*name: Kemal Demirgil
lab: 3
date: May 24
abstract:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

int pause; // initializing a variable for pausing the program once it has been executed
int a=0,b=0;
cout<<"Enter two numbers\n\n";
cout<<"Enter first number:\n";
cin>>a;
cout<<"Enter second number:\n";
cin>>b;
cout<<"The sum is----------> "<<a+b;
cout<<"\n";
cout<<"The product is------> "<<a*b;
cout<<"\n";
cout<<"The difference is---> "<<a-b;
cout<<"\n";
cout<<"The quotient is-----> "<<a/b;
cout<<"\n";
cout<<"The modulus is------> "<<fmod(a,b);













//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

