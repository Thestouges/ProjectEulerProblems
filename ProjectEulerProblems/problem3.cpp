#include "problem3.h"
#include "functions.h"

problem3::problem3(){
	cout<<"Largest prime factor of input number"<<endl;
	cout<<"Enter number: ";
	cin>>number;
	largestprime();
}

void problem3::largestprime(){
	__int64 counter = 0;
	__int64 product = 1;
	
	for(int i = 2; i < number; i++){
		if(number%i == 0 && isPrime(number%i)){
			counter = i;
			product *= i;
		}
		if(product == number)
			break;
	}
	cout<<"Largest prime factor: "<<counter<<endl;
}