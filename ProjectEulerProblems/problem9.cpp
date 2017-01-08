#include "problem9.h"
#include <cmath>

problem9::problem9(){
	cout<<"Finds the product of a pythagorean triplet for which a+b+c=nth number"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;

	pythagoreantriplet();
}

void problem9::pythagoreantriplet(){
	int product = 0;
	for(int i = 1; i < nth; i++){
		for(int j = 1; j < nth; j++){
			if(sqrt(i*i+j*j)+i+j == nth){
				product = sqrt(i*i+j*j)*i*j;
				break;
			}
			else if(sqrt(i*i+j*j)+i+j > nth)
				break;
		}
		if(product != 0)
			break;
	}
	cout<<"Product: "<<product<<endl;
}