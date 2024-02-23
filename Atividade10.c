#include <stdio.h>
main(void){
	int num,num2,resultado;
	printf("digite um numero: ");
	scanf("%d",&num);
	printf("digite mais um numero: ");
	scanf("%d",&num2);
	resultado=num/num2;
	printf("%d/%d=%d",num,num2,resultado);
	return 0;
}