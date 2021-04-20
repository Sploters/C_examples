#include <stdio.h>
#include <stdlib.h> 

int main() {
    float salario;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    if (salario <= 600) {
        salario = salario * 1.3;
        printf("Seu reajuste salarial sera %.2f", salario);
        
        getch();
        return 0; //
    }

     if (salario >= 600.01 && salario <= 1100) {
        salario = salario * 1.25;
        printf("Seu reajuste salarial sera %.2f", salario);
        getch();
        return 0; //
    }

    if (salario >= 1100.01 && salario <= 2400) {
        salario = salario * 1.2;
        printf("Seu reajuste salarial sera %.2f", salario);
        getch();
        return 0; //
    }

    if (salario >= 1100.01 && salario <= 2400) {
        salario = salario * 1.2;
        printf("Seu reajuste salarial sera %.2f", salario);
        getch();
        return 0; //
    }

    if (salario >= 2400.01 && salario <= 3550) {
        salario = salario * 1.15;
        printf("Seu reajuste salarial sera %.2f", salario);
        getch();
        return 0; //
    }

    if (salario > 3550) {
        salario = salario * 1.1;
        printf("Seu reajuste salarial sera %.2f", salario);
        getch();
        return 0; //
    }


}