#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
float x, y, z;
printf("Digite o tamanho da escada:");
scanf("%f", &z);
printf("Digite a altura do quadro:");
scanf("%f", &x);
y = pow(z,2) - pow(x,2);
y = sqrt(y);
printf("%f",y);
getch();
return 0; //
}