#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n1, n2;
    printf("Digite um dos valores:");
    scanf("%d", &n1);
    printf("Digite o outro valor:");
    scanf("%d", &n2);
    if (n1 == n2) { 
        printf("Esses numeros sao iguais");
    } else {
        printf("Esses numeros sao diferentes");
    }
    getch();
return 0; //
}