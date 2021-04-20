#include <stdio.h>
#include <stdlib.h>

int main() {
float sal, c1, c2;
printf("Digite o valor seu salario:");
scanf("%f%*c", &sal);
printf("Digite o valor da conta 1:");
scanf("%f%*c", &c1);
printf("Digite o valor da conta 2:");
scanf("%f%*c", &c2);
c1 = c1 * 1.02;
c2 = c2 * 1.02;
sal = sal - c1 - c2;
printf("%f seu salario restante e R$ %f", sal);
getch();
return 0; //
}