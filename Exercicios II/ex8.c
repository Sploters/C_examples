#include <stdio.h>
#include <stdlib.h> 

int main() {
float dep, taxa, rend, total;
printf("Digite o valor do deposito:");
scanf("%f", &dep);
printf("Digite o valor da taxa:");
scanf("%f", &taxa);
rend = dep * taxa/100;
total = dep + rend;
printf("%2.f",rend);
printf("\n%2.f",total);
getch();
return 0; //
}