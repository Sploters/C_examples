#include <stdio.h>
#include <stdlib.h> 

int main() {
float sal, perc, aumento, novosal;
printf("Digite o valor do salario:");
scanf("%f", &sal);
printf("Digite o valor do percentual:");
scanf("%f", &perc);
aumento = sal * perc/100;
printf("%2.f",aumento);
novosal = sal + aumento;
printf("\n%2.f",novosal);
getch();
return 0; //
}