#include <stdio.h>

int main () {
	
  int num[5], a, mai, men;
	int length = (sizeof(num)/sizeof(num[0])); 

	for( a=0 ; a<length ; a++ ) {
		scanf("%d", &num[a]);
}
  
	for( a=0 ; a<length ; a++ ) {
		if(a==0){
			mai = num[a];
			men = num[a];	
}
		else{
			if(num[a] > mai) mai = num[a];
			if(num[a] < men) men = num[a];
		}
	}
	
	printf("O Maior e : %d\n", mai);
	printf("O Menor e : %d\n", men);
	
	return 0;
}
