#ifndef minhastring_h
#define minhastring_h

// * strcpy - copia string para outro array char //

char *strcpy(char *dest, char *orig)
{
    int i;

    for(i = 0; dest[i] != '\0' ; i++);
        dest[i] = orig[i];

    dest[i]='\0';

    return dest;
}

// * strcmp - comparação entre duas strings //

 int strcmp(char *x, char *y){
 	
	 int i;
 	
	 for(i = 0; x[i] == y[i]; ++i);

	if (x[i] == 0) return 0;
	
	return x[i] - y[i]; 
}

// * strcat - concatenação de duas strings //

char *strcat(char *str1, char *str2){
	
	int i ,j;

    while(str1[i]!='\0'){
    	i++;
  
 }	while(str2[j]!='\0'){
    
	str1[i]=str2[j];
    
	j++;
    i++;
 }

    return str1;
}

// * strlen - retorna tamanho da string. //

int strlen(char *str)
{
    int total=0;

    while( str[total] != '\0')
        total++;

    return total;
}

#endif
