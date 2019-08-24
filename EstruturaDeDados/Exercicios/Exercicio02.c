#include <stdio.h>
#include <math.h>

int main(){
	int b , e , r;
	
	printf("Base: ");
	scanf("%d", &b);
	
	printf("Expoente: ");
	scanf("%d", &e);
	
	r = pow(b, e);
	
	printf("Resultado : %d\n", r);
		
	return r;
}
