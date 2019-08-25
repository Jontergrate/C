#include <stdio.h>

typedef struct{
	char nome[50];
	double area;
	double largura;
	double comprimento;
}REGISTRO;

REGISTRO regis[100];

int main () {
	
	int TLista;
	
	TLista = armazenaRegistros();
	
	mostraRegistros(TLista);
	
return 0;
}

void mostraRegistros (int a) {
	
  int b;
	double areaT = 0;
	
	for(b=0;b<=a;b++){
		printf("Nome do registro: %s\n", regis[b].nome);
		printf("Largura do registro: %.2lf m\n", regis[b].largura);
		printf("Comprimento do registro: %.2lf m\n", regis[b].comprimento);
		printf("Area do registro: %.2lf m²\n", regis[b].area);
		
		areaT = areaT + regis[b].area;
}
	
	printf("Area total da casa: %.2lf m²", areaT);
}


int armazenaRegistros () {
		int a = 0;
	  char pergunta;
	
    while(1){
		printf("Informe o comodo: ");
		gets(regis[a].nome);
		
		printf("Informe a largura em metros : ");
		scanf("%lf", &regis[a].largura);
		
		printf("Informe o comprimento em metros : ");
		scanf("%lf", &regis[a].comprimento);
		
		regis[a].area = regis[a].comprimento * regis[a].largura;
		
		printf(" Calcular mais algum comodo ? S/N: ");
		pergunta = getch();
		if(pergunta == 'N') break;
	
		a++;
}
	
return a;	
}
