/*name: Kemal Demirgil
lab:7
date:August 9,2017	
abstract:
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double X, Y, Z, A, B, Q,tan , PI=3.141592654;
		cout << "Welcome to the Right Angle Triangle Problem Solver ";
	cout << "\nPlease enter the hypotenuse and angle to find the X and Y component->\n";
	cout << "If you would like to continue to the next program type in 0,\nif not enter the hypotenuse->\n";
	cin >> A;
	if (A > 0) {
		cout << "Enter the angle->\n";
		cin >> B;
	
	cout<<"The value for X is->"<<A*cos(B)<<"\nThe value for Y is->"<<A*sin(B)<<"\n";
}
	if (A == 0) {
		cout<<"Please use next program.\n\n";
	}
	B=0;
	A=0;
	cout << "Please enter the X and Y components to find the hypotenuse and angle,\nIf you would like to move to the third program type in 0,\nOr enter the first value for X->";
	cin >> X;
	if (X > 0) {
	cout<<"Enter the second value for Y->\n";
	cin>>Y;
	A=sqrt(pow(X,2)+(pow(Y,2)));
	cout<<"The hypotenuse is->"<<A<<"\n";
	tan=X/Y;
	Q=atan(tan);
	cout<<"The angle is->"<<(Q*180/PI)<<"\n";
}
if ( X == 0) {
	cout<<"Which values are known?";
	double U1,U2;
	cout<<"First value->";
	cin>>U1;
	cout<<"Second value->";
	cin>>U2;
	
	
}
	
		




























	cout << "\ngam3fac3\n";














	return 0;


}

