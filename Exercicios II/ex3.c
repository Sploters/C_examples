#include <stdio.h>
#include <stdlib.h> 

int main() {
float nota1, nota2, nota3, peso1, peso2, peso3, media;
printf("Digite o valor da nota 1:");
scanf("%f", &nota1);
printf("Digite o valor da nota 2:");
scanf("%f", &nota2);
printf("Digite o valor da nota 3:");
scanf("%f", &nota3);
printf("Digite o valor do peso 1:");
scanf("%f", &peso1);
printf("Digite o valor do peso 2:");
scanf("%f", &peso2);
printf("Digite o valor do peso 3:");
scanf("%f", &peso3);
media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/3;
printf("%f",media);
getch();
return 0; //
}