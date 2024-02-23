#include <stdio.h>

main(void){
char nome, cep, tel, end;
printf("digite seu nome: ");
scanf("%s", &nome);
printf("\ndigite seu cep: ");
scanf("%s", &cep);
printf("\ndigite seu telefone: ");
scanf("%s", &tel);
printf("\ndigite seu endereco: ");
scanf("%s", &end);

printf("\nnome: %s\ncep: %s\ntelefone: %tel\nendereco: %s",&nome,&cep,&tel,&end);
}