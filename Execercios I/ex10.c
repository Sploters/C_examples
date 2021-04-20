#include <stdio.h>
#include <stdlib.h> 

int main() {
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 20 && numero <= 90) {
        printf("esta entre 20 e 90");
    }
    else {
        printf("NAO esta entre 20 e 90");
    }

    getch();
return 0; //
}