#include "problem17.h"
#include <string>
#include <cmath>
problem17::problem17(){
	cout<<"Finds total amount of letters in the number nth"<<endl;
	cout<<"Enter nth number: ";
	cin>>nth;

	countletter();
}

void problem17::countletter(){
	total = 0;
	counter(nth);
	cout<<"Total letters: "<<total<<endl;
}

/*	one = 3
	two = 3
	three = 5
	four = 4
	five = 4
	six = 3
	seven = 5
	eight = 5
	nine = 4

	ten = 3
	eleven = 6
	twelve = 6
	thirteen = 8
	fifteen = 7
	eighteen = 8
	14,16,17,19 = +4 to base

	twenty = 6
	thirty = 6
	forty = 5
	fifty = 5
	sixty = 5
	seventy = 7
	eighty = 6
	ninty = 5
	: + base

	hundred = 7
	thousand = 8

*/

void problem17::counter(int num){
	int digits = 0;
	int tempnum = num;
	while(tempnum > 0){
		digits++;
		tempnum = tempnum/10;
	}

	for(int i = 1; i <= digits; i++){
		tempnum = pow(10,digits-i);
		if(num >= 1000){
			total += addbase(num/1000) + 8;
			if(num%1000 == 0){
				break;
			}
		}
		else if(num >= 100){
			total += addbase(num/100) + 7;
			if(num%100 == 0){
				break;
			}
			else
				total += 3;
		}
		else if(num >= 10){
			total += addtenbase(num);
			break;
		}
		else if(num >= 1){
			total += addbase(num);
			break;
		}

		num -= (num/tempnum)*tempnum;
	}
}


int problem17::addbase(int num){
	if(num == 1 || num == 2 || num == 6){
		return 3;
	}
	if(num == 3 || num == 7 || num == 8){
		return 5;
	}
	if(num == 4 || num == 5 || num == 9){
		return 4;
	}
	return 0;
}

int problem17::addtenbase(int num){
	if(num >= 20 && num <= 39 || num >= 80 && num <= 89){
		return addbase(num%10) + 6;
	}
	if(num >= 40 && num <= 69 || num >= 90 && num <= 99){
		return addbase(num%10) + 5;
	}
	if(num >= 70 && num <= 79){
		return addbase(num%10) + 7;
	}

	if(num == 10)
		return 3;
	if(num == 11 || num == 12)
		return 6;
	if(num == 13 || num == 18)
		return 8;
	if(num == 15)
		return 7;
	if(num == 14 || num == 16 || num == 17 || num == 19){
		return addbase(num%10) + 4;
	}
}