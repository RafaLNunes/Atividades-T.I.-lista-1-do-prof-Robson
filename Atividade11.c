#include <stdio.h>

main(void){
	char nome[40],salario[40],ano[40];
	printf("digite seu nome: ");
	fgets(nome,40,stdin);
	printf("digite seu ano de nascimento: ");
	scanf("%s",&ano);
	printf("digite seu salario: ");
	scanf("%s",&salario);
	printf("\nNome: %sAno de Nascimento: %s\nSalario: %s",&nome,&ano,&salario);	
}
