#include <stdio.h>
#include <stdlib.h>

int main() {
float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
printf("Digite o preço de fabrica:");
scanf("%f", &p_fab);
printf("Digite o percentual de lucro do distribuidor:");
scanf("%f", &perc_d);
printf("Digite o percentual de imposto:");
scanf("%f", &perc_i);
vlr_d = p_fab * perc_d / 100;
vlr_i = p_fab * perc_i / 100;
p_final = p_fab + vlr_d + vlr_i;
printf("%f",vlr_d);
printf("\n%f",vlr_i);
printf("\n%f",p_final);
getch();
return 0; //
}