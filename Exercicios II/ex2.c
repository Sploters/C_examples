#include <stdio.h>
#include <stdlib.h> 

int main() {
float nota1, nota2, nota3, media;
printf("Digite o valor da nota 1:");
scanf("%f", &nota1);
printf("Digite o valor da nota 2:");
scanf("%f", &nota2);
printf("Digite o valor da nota 3:");
scanf("%f", &nota3);
media = (nota1 + nota2 + nota3)/3;
printf("%f",media);
getch();
return 0; //
}