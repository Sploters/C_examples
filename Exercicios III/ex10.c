#include <stdio.h>
#include <stdlib.h>

int main() {
int ano_nasc, ano_atual, idade;
printf("Digite o ano de nascimento:");
scanf("%d%*c", &ano_nasc);

printf("Digite o ano atual:");
scanf("%d%*c", &ano_atual);

idade = ano_atual-ano_nasc;
printf("%d");

getch();
return 0; //
}