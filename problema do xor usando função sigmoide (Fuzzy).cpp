//problema do xor usando funcao sigmoide (Fuzzy)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float w1 = 3.0, w2 = 5.0, w3 = 3.0, w4 = 1.0, w5 = 4.0, w6 = 7.0, t1 = 2.0, t3 = 3.0;
	float t2 = 3.5;
	float escolha1, escolha2;
	float soma1, soma2, soma3;
	float o1,o2,o3; 
	
	printf("Por favor escolha outra opcao 0 ou 1\n");
	scanf("%f", &escolha1);
		
	while(escolha1 != 1 && escolha1 !=0) {
		printf("Opcao invalida\n");
		printf("Por favor escolha outra opcao 0 ou 1\n");
		scanf("%f", &escolha1);
	}
	
	printf("Por favor escolha outra opcao 0 ou 1\n");
	scanf("%f", &escolha2);
		
	while(escolha2 != 1 && escolha2 !=0) {
		printf("Opcao invalida\n");
		printf("Por favor escolha outra opcao 0 ou 1\n");
		scanf("%f", &escolha2);
	}
	
	soma1 = (escolha1 * w1) + (escolha2 *w2);
	o1 = 1.0/(1.0+exp(20.0 * (soma1-t1)));
	
	
	soma2 =  (escolha1 * w3) + (escolha2 *w4);
	o2 = 1.0/(1.0+exp(-20.0 * (soma2-t2)));

	soma3 = (o1 * w5) + (o2 *w6);

	o3 =  1.0/(1.0+exp(20.0 * (soma3-t3)));
	
	
	return printf("01 = %0f, 02 = %0f, 03= %0f", o1, o2, o3 );
	
	
}
