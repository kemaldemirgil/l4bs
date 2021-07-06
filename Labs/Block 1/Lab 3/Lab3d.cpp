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
cout<<"Number     Square     Cube\n";
cout<<"  0          "<<pow(0,2)<<"          "<<pow(0,3)<<"     \n";           
cout<<"  1          "<<pow(1,2)<<"          "<<pow(1,3)<<"     \n";                     
cout<<"  2          "<<pow(2,2)<<"          "<<pow(2,3)<<"     \n";                     
cout<<"  3          "<<pow(3,2)<<"          "<<pow(3,3)<<"     \n";                   
cout<<"  4          "<<pow(4,2)<<"         "<<pow(4,3)<<"     \n";                     
cout<<"  5          "<<pow(5,2)<<"         "<<pow(5,3)<<"     \n";                    
cout<<"  6          "<<pow(6,2)<<"         "<<pow(6,3)<<"     \n";                     
cout<<"  7          "<<pow(7,2)<<"         "<<pow(7,3)<<"     \n";                     
cout<<"  8          "<<pow(8,2)<<"         "<<pow(8,3)<<"     \n";                     
cout<<"  9          "<<pow(9,2)<<"         "<<pow(9,3)<<"     \n";                    
cout<<"  10         "<<pow(10,2)<<"        "<<pow(10,3)<<"     \n";                     





//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

