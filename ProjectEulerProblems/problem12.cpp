#include "problem12.h"
#include <cmath>

problem12::problem12(){
	cout<<"Find the first triangle number to have over nth divisors"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;

	triangledivisors();
}

void problem12::triangledivisors(){
	__int64 tri = 0;
	int divisors;
	for(int i = 1; i > 0; i++){
		divisors = 1;
		tri += i;
		for(int j = 2; j < sqrt(tri); j++){
			if(tri%j == 0)
				divisors += 2;
		}
		if(divisors > nth)
			break;
	}

	cout<<"First triangle number to have over "<<nth<<" divisors: "<<tri<<endl;
}