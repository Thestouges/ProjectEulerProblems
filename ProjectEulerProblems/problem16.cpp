#include "problem16.h"
#include "functions.h"

problem16::problem16(){
	cout<<"Finds sum of digits of the number 2 to the power of nth"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;

	power();
	sum();
}

void problem16::power(){
	number.push_back(2);
	int overflow = 0;

	for(int i = 1; i < nth; i++){
		int size = number.size();
		overflow = 0;
		for(unsigned int j = 0; j < size; j++){
			number[j] *= 2;

			if(overflow > 0){
				number[j] += overflow;
				overflow = 0;
			}

			if(number[j] >= 10){
				overflow = number[j]/10;
				number[j] = number[j]%10;
			}
		}
		if(overflow > 0)
			number.push_back(overflow);
	}
}

void problem16::sum(){
	cout<<"Sum: "<<sumofdigits(number)<<endl;
}