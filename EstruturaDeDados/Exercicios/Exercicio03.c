#include <stdio.h>

int main() {
	
int a, num = 1, num2 = 0, result = 0;

for(a=0; a<15 ; a++) {
		printf("%d\n", result);
		
    result = num + num2;
		num = num2;
		num2 = result;
}
	
	return 0;

}
