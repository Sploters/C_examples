#include <stdio.h>
#include <stdlib.h>

int main() {
float pes, polegadas, jardas, milhas;
printf("Digite o valor em pes:");
scanf("%f", &pes);
polegadas = pes * 12;
jardas = pes/3;
milhas = jardas/1760;
printf("%f",polegadas);
printf("\n%f",jardas);
printf("\n%f",milhas);
getch();
return 0; //
}