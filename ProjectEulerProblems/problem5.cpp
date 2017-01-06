#include "problem5.h"

problem5::problem5(){
	cout<<"Finds the smallest positive number that is evenly divisible by all of the numbers from 1 to input number"<<endl;
	cout<<"Enter max number: ";
	cin>>max;

	smallestMultiple();
}

void problem5::smallestMultiple(){
	int number = max;
	while(1){
		bool found = true;
		for(int i = max; i >= 1; i--){
			if(number%i != 0){
				number += max;
				found = false;
				break;
			}
		}
		if(found){
			cout<<"Smallest number: "<<number<<endl;
			break;
		}
	}
}