#include <stdio.h>
#include <stdlib.h>

int main() {
float custo, convite, qtd;
printf("Digite valor do espetaculo:");
scanf("%f", &custo);
printf("Digite valor do convite:");
scanf("%f", &convite);
qtd = custo / convite;
printf("%f",qtd);
getch();
return 0; //
}