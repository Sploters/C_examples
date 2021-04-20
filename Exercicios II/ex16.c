#include <stdio.h>
#include <stdlib.h>

int main() {
float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;
printf("Digite as horas trabalhadas:");
scanf("%f", &horas_t);
printf("Digite o valor do salario minimo:");
scanf("%f", &vlr_sal_min);
vlr_hora_t = vlr_sal_min / 2;
vlr_sal_bru = vlr_hora_t * horas_t;
imp = vlr_sal_bru * 3 / 100;
vlr_sal_liq = vlr_sal_bru - imp;
printf("%f",vlr_sal_liq);
getch();
return 0; //
}