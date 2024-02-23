#include <stdio.h>

main(void){
	int diametro,raio;
	printf("digite a medida de diametro de um circulo: ");
	scanf("%d",&diametro);
	raio=diametro/2;
	printf("o raio do circulo e: %d",raio);
	return 0;
}