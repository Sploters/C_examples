#include <stdio.h>
#include <stdlib.h> 

int main() {
float base, altura, area;
printf("Digite o valor da base:");
scanf("%f", &base);
printf("Digite o valor da altura:");
scanf("%f", &altura);
area = base * altura/2;
printf("%2.f",area);
getch();
return 0; //
}