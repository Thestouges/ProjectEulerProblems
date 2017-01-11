#include "problem14.h"

problem14::problem14(){
	cout<<"Find the longest chain under nth number of the collatz sequence"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;

	longestChain();
}

void problem14::longestChain(){
	__int64 chain = 0;
	int number = 0;
	for(int i = 1; i < nth; i++){
		counter = 0;
		collatz(i);
		if(counter > chain){
			chain = counter;
			number = i;
		}
	}
	cout<<"Longest chain is number "<<number<<" with "<<chain<<" chains"<<endl;
}

int problem14::collatz(__int64 num){
	counter++;
	if(num == 1){
		return 1;
	}
	else if(num%2 == 0){
		return collatz(num/2);
	}
	else
		return collatz(3*num+1);
}