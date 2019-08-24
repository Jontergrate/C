#include <stdio.h>
#include <math.h>

int main(){
  int a;
	long int result;
	
	for(a=0; a<16 ; a++){
		result = pow(3, a);
		printf("3 elevado %d = %li\n", a, result);
		result = 0;
}

return 0;
}
