#include <stdio.h>
#include <math.h>

int main(){
	int a;
	long int result;
	
	for (a = 0; a < 16; a++){
		result = pow(3, a);
		printf("3 elevado %d = %li\n", a, result);
		result = 0;
	}
	
	for(a=0; a<16 ;a++){
		result = pow_copy(3, a);
		printf("3 elevado %d = %li\n", a, result);
		result = 0;
	}
	
	
	return 0;
}


int pow_copy(int b, int exp){
	int a, result;
	
	result = 1;
	
	for(a=0; a<exp; a++){
		result = result * b;
	}
	
	return result;
}
