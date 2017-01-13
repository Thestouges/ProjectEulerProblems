#include "functions.h"

bool isPrime(__int64 num){
	for(__int64 i = 2; i < num; i++){
		if(num%i == 0)
			return false;
	}
	return true;
}

int sumofdigits(__int64 num){
	std::string s = std::to_string(num);
	int sum = 0;
	int value;
	std::string temp;
	for(int i = 0; i < s.length(); i++){
		temp = s[i];
		std::stringstream ss(temp);
		ss>>value;
		sum += value;
	}
	return sum;
}

int sumofdigits(double num){
	std::string s = std::to_string(num);
	int sum = 0;
	int value;
	std::string temp;
	for(int i = 0; i < s.length(); i++){
		temp = s[i];
		std::stringstream ss(temp);
		ss>>value;
		sum += value;
	}
	return sum;
}

int sumofdigits(std::vector<int> num){
	int sum = 0;
	for(unsigned int i = 0; i < num.size(); i++){
		sum += num[i];
	}
	return sum;
}