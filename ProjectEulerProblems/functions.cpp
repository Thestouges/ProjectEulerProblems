#include "functions.h"

bool isPrime(__int64 num){
	for(__int64 i = 2; i < num; i++){
		if(num%i == 0)
			return false;
	}
	return true;
}