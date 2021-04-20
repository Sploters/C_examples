#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main() {
    float A, B, C, delta, X1, X2;
    printf("Digite o valor do termo A: ");
    scanf("%f", &A);
    printf("Digite o valor do termo B: ");
    scanf("%f", &B);
    printf("Digite o valor do termo C: ");
    scanf("%f", &C);

    delta = (B*B - 4*A*C);
    X1 = (-B + sqrt(delta)) / (2*A);
    X2 = (-B - sqrt(delta)) / (2*A);

    if (delta < 0)  { 
        printf("Essa equacao nao possui raiz real");
    } else {
        printf("X1 = %2.f", X1);
        printf("\nX2 = %2.f", X2);
    }
    getch();
return 0; //
}