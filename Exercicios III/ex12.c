#include <stdio.h>
#include <stdlib.h>

int main() {
float l, c, p, area;
printf("Digite o comprimento do comodo em metros:");
scanf("%f%*c", &c);
printf("Digite a largura do comodo em metros:");
scanf("%f%*c", &l);

area = c*l;
p = 18 * area;
printf("A area do comodo = %f", area);
printf("\nPotencia total = %f", p);
getch();
return 0; //
}