#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
float ang, alt, escada, radiano;
printf("Digite o angulo em graus:");
scanf("%f", &ang);
printf("Digite a altura da parede:");
scanf("%f", &alt);
radiano = ang * 3.14 / 180;
escada = alt / sin(radiano);
printf("%f",escada);
getch();
return 0; //
}