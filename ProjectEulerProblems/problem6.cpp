#include "problem6.h"

problem6::problem6(){
	cout<<"Finds the difference between the sum of the squares of all numbers to max input number and the square of the sum"<<endl;
	cout<<"Enter max number: ";
	cin>>max;

	sumsquredifference();
}

void problem6::sumsquredifference(){
	int square = 0;
	int sum = 0;

	for(int i = 1; i <= max; i++){
		sum += i*i;
		square += i;
	}
	square *= square;

	cout<<"Difference: "<<square-sum<<endl;
}