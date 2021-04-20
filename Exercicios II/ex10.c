#include <stdio.h>
#include <stdlib.h> 

int main() {
float area, raio;
printf("Digite o valor do raio:");
scanf("%f", &raio);
area = 3.1415 * raio*raio;
printf("%f",area);
getch();
return 0; //
}