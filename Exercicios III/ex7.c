#include <stdio.h>
#include <stdlib.h>

int main() {
float peso;
printf("Digite o peso da pessoa:");
scanf("%f%*c", &peso);
printf("\nSeu peso caso engorde 15%%: %2.f",peso*1.15);
printf("\nSeu peso caso emagreca 20%%: %2.f",peso*.8);
getch();
return 0; //
}