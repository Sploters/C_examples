#include <stdio.h>
#include <stdlib.h>

int main() {
float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;
printf("Digite o valor do salario:");
scanf("%f", &vlr_sal);
printf("Digite o consumo de quilowatt:");
scanf("%f", &qtd_kw);
vlr_kw = vlr_sal /5;
vlr_reais = vlr_kw * qtd_kw;
desc = vlr_reais - desc;
printf("%f",vlr_kw);
printf("\n%f",vlr_reais);
printf("\n%f",vlr_desc);
getch();
return 0; //
}