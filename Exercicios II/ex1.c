#include <stdio.h>
#include <stdlib.h> 

int main() {
float n1, n2, n3, n4, soma;
printf("Digite o valor de n1:");
scanf("%f", &n1);
printf("Digite o valor de n2:");
scanf("%f", &n2);
printf("Digite o valor de n3:");
scanf("%f", &n3);
printf("Digite o valor de n4:");
scanf("%f", &n4);
soma = (n1 + n2 + n3 + n4);
printf("%f",soma);
getch();
return 0; //
}