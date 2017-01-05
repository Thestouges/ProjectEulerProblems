#include "problem2.h"

problem2::problem2(){
	cout<<"By considering the terms in the Fibonacci sequence whose values do not exceed input number, finds the sum of the even-valued terms"<<endl;
	cout<<"Enter max number: ";
	cin>>number;
	sum();
}

void problem2::sum(){
	int sum = 0;
	int x = 1;
	int y = 2;
	while(y < number){
		int temp;
		if(y%2 == 0)
			sum += y;
		temp = y;
		y += x;
		x = temp;
	}
	cout<<"Sum: "<<sum<<endl;
}