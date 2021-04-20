#include <stdio.h>
#include <stdlib.h> 

int main() {
float sal, novosal;
printf("Digite o valor do salario:");
scanf("%f", &sal);
novosal = sal + (sal * 25/100);
printf("%f",novosal);
getch();
return 0; //
}