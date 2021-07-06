/*name: Kemal Demirgil
lab: 4b
date: May 31
abstract: If statements
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
double x=0;
int pause; // initializing a variable for pausing the program once it has been executed
cout<<"Enter a wavelength to classify-> ";
cin>>x;
if(x<0.400) {
cout<<"Wavelength is outside of visible spectrum";
}               
if(x>0.700) {
cout<<"Wavelength is outside of visible spectrum";
}     
if(x>=0.400 && x<=0.423) {
cout<<"Corresponding color-> Violet";
}
if(x>=0.424 && x<=0.490) {
cout<<"Corresponding color-> Blue";
}         
if(x>=0.491 && x<=0.574) {
cout<<"Corresponding color-> Green";
}          
if(x>=0.575 && x<=0.584) {
cout<<"Corresponding color-> Yellow";
}           
if(x>=0.585 && x<=0.646) {
cout<<"Corresponding color-> Orange";
}          
if(x>=0.647 && x<=0.700) {
cout<<"Corresponding color-> Red";
}   
cout<<"\ngam3fac3";         
      
            
            
            
            
            
            
            
            
            





//System ("PAUSE");      // not good!!! but if int x; isn't initialized then this is only way to pause

cin>> pause;  // used in lieu of SYSTEM PAUSE

return 0; // this is to satisfy int main as a return value, if void main() is used instead this is not required

} // end main program

