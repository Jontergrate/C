#include <stdio.h>

int main () {
	
  int a;
	long int b = 1, s = 0, ult;
	
	for( a = 0 ; a < 64 ; a++){
		ult = b;
		s = s + ult;
		b = 2 * b;
		ult = b;
	}
	
	printf("Numero: %li", s);
	
	return 0;
}
