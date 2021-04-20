#include <stdio.h>
#include <stdlib.h>

int main() {
float sal_min, sal, qtde;
printf("Digite o valor do salario minimo:");
scanf("%f%*c", &sal_min);
printf("Digite o valor do salario atual:");
scanf("%f%*c", &sal);
qtde = sal / sal_min;
printf("\n Qtde de salarios minimos: %.2f",qtde);

getch();
return 0; //
}