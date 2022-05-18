//problema do xor usando if
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int w1 = 3, w2 = 5, w3 = 3, w4 = 1, w5 = 4, w6 = 7, t1 = 2, t3 = 3;
	float t2 = 3.5;
	int escolha1, escolha2;
	int soma1, soma2, soma3;
	int o1,o2,o3;
	
	printf("Por favor escolha entre 0 ou 1\n");
	scanf("%d", &escolha1);
		
	while(escolha1 != 1 && escolha1 != 0) {
		printf("Opcao invalida\n");
		printf("Por favor escolha uma opcao 0 ou 1\n");
		scanf("%d", &escolha1);
	}
	
	printf("Por favor escolha entre 0 ou 1\n");
	scanf("%d", &escolha2);
		
	while(escolha2 != 1 && escolha2 != 0) {
		printf("Opcao invalida\n");
		printf("Por favor escolha uma opcao entre 0 e 1\n");
		scanf("%d", &escolha2);
	}
	
	soma1 = (escolha1 * w1) + (escolha2 *w2);
	if(soma1 >t1)
	{	
		o1 = 0;
	}
	else
	{
		o1 = 1;	
	}
	
	soma2 =  (escolha1 * w3) + (escolha2 *w4);
	if(soma2 >t2)
	{
		o2 = 1;	
	}
	else
	{
		o2 = 0;
	}
	
	soma3 = (o1 * w5) + (o2 * w6);
	if(soma3 > t1)
	{
		o3 = 0;
	}
	else
	{
		o3 = 1;
	}
	
	return printf("01 = %d, 02 = %d, 03= %d", o1, o2, o3 );
	
}
