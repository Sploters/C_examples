#include <stdio.h>
#include <stdlib.h> 

int main() {
    float compra, venda;
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &compra);

    if (compra  < 20) {
        venda = compra * 1.45;
        printf("O valor de venda deste produto sera %.2f", venda);
    }
    else {
        venda = compra * 1.3;
        printf("O valor de venda deste produto sera %.2f", venda);
    }

    getch();
return 0; //
}