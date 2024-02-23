#include <stdio.h>

main(void){
	char nome;
	printf("Qual o seu nome? ");
	scanf("%s",&nome);
	printf("Hola %s!Como esta? Tranquilo?",&nome);
	return 0;
}