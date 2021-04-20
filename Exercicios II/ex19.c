#include <stdio.h>
#include <stdlib.h>

int main() {
float a_degrau, a_usuario, qtd_degraus;
printf("Digite a altura de cada degrau:");
scanf("%f", &a_degrau);
printf("Digite a altura do usuario:");
scanf("%f", &a_usuario);
qtd_degraus = a_usuario / a_degrau;
printf("%f",qtd_degraus);
getch();
return 0; //
}