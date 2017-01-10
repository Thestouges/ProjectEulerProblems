#include "problem10.h"
#include "functions.h"

problem10::problem10(){
	cout<<"Find the sum of all the primes below nth number"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;
	primesum();
}

void problem10::primesum(){
	__int64 sum = 0;
	for(__int64 i = nth-1; i > 1; i--){
		if(isPrime(i)){
			sum += i;
			cout<<i<<endl;
		}
	}
	cout<<"Sum: "<<sum<<endl;
}