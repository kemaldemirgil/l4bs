/*name: Kemal Demirgil
lab:9
date:August 9,2017
abstract:
*/
//gam3fac3..........................................................................................

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int pause; 
	double num[3];
	char no;
	int x,y,z;	
	
	while (no!='N' && no!='n'){
		
		cout<<"Please enter area code->";
		cin>>num[0];
		cout<<"Please enter city code->";
		cin>>num[1];
		cout<<"Please enter personal 4 digits->";
		cin>>num[2];
		
		cout<<"Your phone number is->"<<num[0]<<"-"<<num[1]<<"-"<<num[2];
		
		cout<<"\n\nWhat would you like to change?"
		"\n1->Area Code"
		"\n2->City Code"
		"\n3->Personal 4 digits"
		"\n4->Please select an option: ";
		
		cin>>x;
		
		if (x == 1) {
			cout<<"\n\nPlease change your area code->";
			cin>>num[0];
			
			cout<<"Your new phone number is->"<<num[0]<<"-"<<num[1]<<"-"<<num[2];	
		}
		
		if (x == 2) {
			cout<<"\n\nPlease change your city code->";
			cin>>num[1];
			
			cout<<"Your corrected phone number is->"<<num[0]<<"-"<<num[1]<<"-"<<num[2];	
		}
		
		if (x == 3) {
			cout<<"\n\nPlease change your personal 4 digits->";
			cin>>num[2];
			
			cout<<"Your corrected phone number is->"<<num[0]<<"-"<<num[1]<<"-"<<num[2];	
		}

		cout << "\n\nWould you like to try again?\nYes?\nNo?";
      	cin >> no;
      	
      	cout<<"\n";
	}
	






cin>> pause; 
	
	cout << "\ngam3fac3\n";














	return 0;


}
