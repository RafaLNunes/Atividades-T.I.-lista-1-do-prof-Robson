#include <stdio.h>

int main(void){
	int preco, qnt,valor;
	printf("digite o valor do produto: ");
	scanf("%d",&preco);
	printf("digite a quantidade: ");
	scanf("%d",&qnt);
	valor=preco*qnt;
	printf("valor total: %d",valor);
	return 0;
}