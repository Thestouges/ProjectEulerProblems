#include "problem1.h"

problem1::problem1(){
	cout<<"Find the sum of all the multiples of 3 or 5 below input number"<<endl;
	cout<<"Enter max number: ";
	cin>>number;
	sum();
}

void problem1::sum(){
	int count = 0;
	for(int i = 1; i < number; i++){
		if(i%3 == 0 || i%5 == 0)
			count+=i;
	}
	cout<<"Sum: "<<count<<endl;
}