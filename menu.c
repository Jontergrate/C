#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial ();
int primo ();
int primon ();
int potencia ();
int raiz ();
int bissexto ();
int media ();


int main(){
  int num;

  scanf ("%d", &num);

  int n, i ,A = 1;
  int x, z, w, a, t, exp, v, ano, p, k, h, matricula;
  float b, rz, nota1, nota2, notap1, notap2, notap3;
  char nome[1000];
	

  
  

	switch (num){
    case 1:
      
	  scanf("%d",&n);
      int res = fatorial(n);
      
      break;
    case 2 :
      
	  printf("Digite um numero inteiro e positivo: ");
      scanf("%d", &x);
      int res1 = primo(x);

      break;
    case 3 :
     
	  while (z !=0) {
	  printf("\nDigite um numero inteiro e positivo: ");
      scanf("%d", &z);
       int res2 = primon(z);
    }
  
      break;
    case 4 :
     
	 printf("Informe a base: \n");
	  scanf("%d" ,&a);
 	
	 printf("Informe o expoente: \n");
     scanf("%f" ,&b);  
	 
	 int res3 = potencia(w);
   
      break;
  case 5 :
      
      printf("Informe um numero :");
      scanf("%f", &rz);
     
	 printf("Informe o expoente : ");
     scanf("%d", &exp);
     
     int res4 = raiz(t);
      
      break;
  case 6 :
  	
  	printf("Informe um ano: ");
	scanf("%d", &ano);
	
	int res5 = bissexto(v);
      
      break;
    case 7 :
    	
    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);
    
	printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);
    
	int res6 = media(p);
	  
      break;
    case 8 :
    	
    	printf("Informe sua primeira nota: ");
			scanf("%f", &notap1);
		printf("Informe sua segunda nota: ");
			scanf("%f", &notap2);
		printf("Informe sua terceira nota: ");
			scanf("%f", &notap3);
			
		int res7 = mediap(k);
		
      
      break;
    case 9 :
      
      break;
    default :
      printf ("Erro!\n");
  
  }
  return 0;
}

int fatorial(int n) {
  
  int i, A;
  A = 1;
  
  for(i = n; i >= 1; i--){
    A = A * i;
  }
  printf("%d", A);
  return A;
}

int primo(int x) {
	
	int y;
	int div = 0;
   
   while (x <= 0);
  
  for (y = 1; y <= x; y++) {
    if (x % y == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O numero %d e primo!", x);
  else
    printf("O numero %d nao e primo!", x);
    
	return x;
}

int primon(int z) {
	int y;
	int div = 0;
	
	for (y = 1; y <= z; y++) {
    if (z % y == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O numero %d e primo!", z);
  else
    printf("O numero %d nao e primo!", z);
        
    return z;

}

int potencia(int w) {
	
	int a;
	float b;
	
	float pot = (pow(a,b));
	printf("%.1e" ,pot);
	
	return w;

}

int raiz(int t)	{
	
	
	int exp;
	float raiz, rz;
	 
	raiz = pow(exp,1.0/rz);
	printf("A Raiz e : %.1f \n", raiz); 
	
	return t;
		
}

int bissexto(int v) {
	
	int ano;
			
	if (ano%4 == 0){
		printf("O ano e bissexto", ano);
    }   
    else{
		printf("O ano nao e bissexto", ano);
    }
			
	return v;
	
}

int media(int p) {
	
	
	float media, nota1, nota2;
	
	if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10){
        printf("\nNota invalida");
    }
	else{
		media = (nota1 + nota2)/2;
        printf("\n Sua media e %.1f" , media);
        
    }

	return p;

}

int mediap (int k) {
	
	
	float notap1, notap2, notap3;
	float mp = ((notap1 + notap2) + notap3)/2;
			
	printf("A media e %.1f\n", mp);
		
	if(mp > 60) {
		printf("Voce foi aprovado");
	}
	else{
		printf("Voce foi reprovado");
   }
   
   return mp;

}	
	
int hexa (int h) {



}
