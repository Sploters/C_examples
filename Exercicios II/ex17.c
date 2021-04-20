#include <stdio.h>
#include <stdlib.h>

int main() {
float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
printf("Digite o salario:");
scanf("%f", &salario);
printf("Digite o valor do primeiro cheque:");
scanf("%f", &cheque1);
printf("Digite o valor do segundo cheque:");
scanf("%f", &cheque2);
cpmf1 = cheque1 * 0.38 / 100;
cpmf2 = cheque2 * 0.38 / 100;
saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
printf("%f",saldo);
getch();
return 0; //
}