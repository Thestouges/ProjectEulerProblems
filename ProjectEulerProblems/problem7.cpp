#include "problem7.h"

problem7::problem7(){
	cout<<"Finds the nth prime number"<<endl;
	cout<<"Enter nth number: ";
	cin>>number;

	nthprime();
}

void problem7::nthprime(){
	int currentprime = 2;
	int temp;
	int counter = 0;
	int nth = 1;
	while(nth < number){
		temp = currentprime+1;

		for(int i = temp; i > 0; i++){
			for(int j = i-1; j > 1; j--){
				if(i%j == 0){
					counter++;
					break;
				}
			}
			if(counter == 0){
				currentprime = i;
				nth++;
				break;
			}
			else
				counter = 0;
		}
	}
	cout<<"Nth prime: "<<currentprime<<endl;
}