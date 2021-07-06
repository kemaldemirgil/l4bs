/*name: Kemal Demirgil
lab: 2
date: May 17
abstract: Final Grade
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

int pause; // initializing a variable for pausing the program once it has been executed
int x=0, y=0, z=0, a=0;
cout<<"Enter a lab grade out of 20 ->";
cin>>x;
cout<<"\n";
cout<<"Enter a midterm grade out of 40 ->";
cin>>y;
cout<<"\n";
cout<<"Enter a final exam grade out of 40 ->";
cin>>z;
cout<<"\n";
a=x+y+z;
cout<<"Your final grade is "<<a;
















//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

