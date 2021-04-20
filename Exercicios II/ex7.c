#include <stdio.h>
#include <stdlib.h> 

int main() {
float sal, salreceber, imp;
printf("Digite o valor do salario:");
scanf("%f", &sal);
imp = sal * 10/100;
salreceber = sal + 50 - imp;
printf("%2.f",salreceber);
getch();
return 0; //
}