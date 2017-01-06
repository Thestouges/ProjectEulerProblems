#include "problem4.h"
#include <string>

problem4::problem4(){
	int input;
	cout<<"Finds the largest palindrome made from the product of two numbers of input length"<<endl;
	cout<<"Enter 1st number length: ";
	cin>>input;

	max1 = 1;
	for(int i = 0; i < input; i++)
		max1 *= 10;

	cout<<"Enter 2nd number length: ";
	cin>>input;

	max2 = 1;
	for(int i = 0; i < input; i++)
		max2 *= 10;

	palindrome();
}

void problem4::palindrome(){
	int product = 0;

	for(int i = max1; i > 0; i--)
		for(int j = max2; i > 0; j--){
			if(isPalindrome(i*j)){
				if(product < i*j)
					product = i*j;
				else
					break;
			}
		}

	cout<<"Largest: "<<product<<endl;
}

bool problem4::isPalindrome(int number){
	string s = to_string(number);

	for(int i = 0; i < s.length()/2; i++){
		if(s[i] != s[(s.length()-1)-i])
			return false;
	}
	return true;
}