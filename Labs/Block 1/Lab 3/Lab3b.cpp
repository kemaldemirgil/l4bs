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
int a=0,b=0,c=0;
cout<<"Enter three integers:\n";
cin>>a;
cin>>b;
cin>>c;
cout<<a<<" * "<<b<<" * "<<c<<" = "<<a*b*c;












//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

