#include <stdio.h>
#include <stdlib.h>

int main() {
float peso_saco, racao_gato1, racao_gato2, total_final;
printf("Digite peso do saco:");
scanf("%f", &peso_saco);
printf("Digite a quantidade de racao para o primeiro gato:");
scanf("%f", &racao_gato1);
printf("Digite a quantidade de racao para o segundo gato:");
scanf("%f", &racao_gato2);
racao_gato1 = racao_gato1 /1000;
racao_gato2 = racao_gato2 /1000;
total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
printf("%f",total_final);
getch();
return 0; //
}