#include <stdio.h>
#include <stdlib.h>

int main() {
float ano_atual, ano_nascimento, idade_atual, idade_2050;
printf("Digite o ano atual:");
scanf("%f", &ano_atual);
printf("Digite o ano de nascimento:");
scanf("%f", &ano_nascimento);
idade_atual = ano_atual - ano_nascimento;
idade_2050 = 2050 - ano_nascimento;
printf("%f",idade_atual);
printf("\n%f",idade_2050);
getch();
return 0; //
}