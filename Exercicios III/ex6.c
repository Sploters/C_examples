#include <stdio.h>
#include <stdlib.h>

int main() {
float sal_fixo, vendas, sal_final;
printf("Digite o salario:");
scanf("%f", &sal_fixo);
printf("Digite a quantidade de vendas:");
scanf("%f", &vendas);
vendas = sal_fixo*.04;
sal_final = sal_fixo + vendas;
printf("%f%*c",sal_final);
getch();
return 0; //
}