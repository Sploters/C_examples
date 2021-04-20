#include <stdio.h>
#include <stdlib.h>

int main() {
float hora, h, m, conversao;
printf("Digite a hora:");
scanf("%f", &hora);
h = floor(hora);
m = hora - h;
conversao = (h * 60) + (m * 100);
printf("%f",conversao);
getch();
return 0; //
}