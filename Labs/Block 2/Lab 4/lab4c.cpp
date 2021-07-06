/*name: Kemal Demirgil
lab: 4c
date: May 31
abstract: If statements
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
double v,a,b,c;
int pause; // initializing a variable for pausing the program once it has been executed
cout<<"Enter a Value for VS -->";
cin>>v;
cout<<"\nEnter a value for R1-->";
cin>>a;
cout<<"\nEnter a value for R2-->";            
cin>>b;
cout<<"\nWhat brach circuit would you like to solve for? \n1. L1\n2. L2\n-->";            
cin>>c
;if(c==1){
	cout<<v/a;}
;if(c==2){
	cout<<v/b;
}            
cout<<"\n\n Thanks For Using Parallel Circuit Solver!";
cout<<"\ngam3fac3";             
            
            
            
            
            
            
            
            
            





//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

