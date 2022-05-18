// estrutura modificada do problema xor.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float w1[4][4];
	float w2[4][4];
	float I[4][4];
	float O[4][4];
	float escolha1, escolha2;
	w1[1][1]=-70.0;
	w1[2][1]=-20.0;
	w1[3][1]=80.0;
	w1[1][2]=90.0;
	w1[2][2]=40.0;
	w1[3][2]=-20.0;
	w2[1][1]=50.0;
	w2[2][1]=10.0;
	w2[3][1]=-55.0;

	printf("Por favor escolha  entre 0 e 1\n");
	scanf("%f", &escolha1);
		
	while(escolha1 != 1 && escolha1 != 0) {
		printf("Opcao invalida\n");
		printf("Por favor escolha outra opcao 0 ou 1\n");
		scanf("%f", &escolha1);
	}
	
	printf("Por favor escolha entre 0 e 1\n");
	scanf("%f", &escolha2);
		
	while(escolha2 != 1 && escolha2 != 0) {
		printf("Opcao invalida\n");
	    printf("Por favor escolha outra opcao 0 ou 1\n");
		scanf("%f", &escolha2);
	}
	
	I[1][1]=escolha1;
	I[1][2]=escolha2;
	I[1][3]=1.0;
	O[1][1]= I[1][1];
	O[1][2]= I[1][2];
	O[1][3]= I[1][3];
	
	I[2][1]= O[1][1]*w1[1][1]+O[1][2]*w1[2][1]+O[1][3]*w1[3][1];

	I[2][2]= O[1][1]*w1[1][2]+O[1][2]*w1[2][2]+O[1][3]*w1[3][2];
	
	I[2][3]= 1.0;
	
	O[2][1]= 1.0/(1.0+exp(-I[2][1]));
	
	O[2][2]= 1.0/(1.0+exp(-I[2][2]));
	
	O[2][3]= I[2][3];
	
	I[3][1]= O[2][1]*w2[1][1]+O[2][2]*w2[2][1]+O[2][3]*w2[3][1];
	
	O[3][1]= 1.0/(1.0+exp(-I[3][1]));
	
	printf("%.2f",O[3][1]);
}
