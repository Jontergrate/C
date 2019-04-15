#include <stdio.h>
#include "minhastring.h"
#include <string.h>

int main () {
	
	char string[30] = {"exercicio"};
	char string1[30] = {"finalizado"};
	
//  copia string para outro array char  //
	
	strcpy(string,string1);
	printf("\n%s", string);
	
//  comparação entre duas strings  //	
	
	printf("\n%d", strcmp(string, string1));
	
//  concatenação de duas strings  //
		
	printf("\n%d", strlen(string));

//  retorna tamanho da string  //
	
	strcat(string, string1);
	printf("\n%s\n",string);

return 0;          

}
