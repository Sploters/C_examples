#include <stdio.h>
#include <stdlib.h> 

int main() {
float sal, salreceber, grat, imp;
printf("Digite o valor do salario:");
scanf("%f", &sal);
grat = sal * 5/100;
imp = sal * 7/100;
salreceber = sal + grat - imp;
printf("%2.f",salreceber);
getch();
return 0; //
}