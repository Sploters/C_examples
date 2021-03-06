#include <stdio.h> //biblioteca/cabeçalho std = standard; i = input; o = output;
#include <stdlib.h>

int main()
{
    printf("\nVose foi haskeado kkkkkJk"); // \n = nova linha

    printf("\nValor: %d", 50); //%d = decimal/integer
    printf("\nSalario: %f",5000.60); //%f = float
    printf("\nO sol dista %d km da lua que dista %d km da Terra que dista %d de Marte.", 500, 8000, 12000);
    int x=3; //número inteiro.
    float y=3.5; //número real.
    double z=27.6;
    char sexo ='m'; //aspas simples('') serve para apenas 1 caractere.
    char nome[9]="Zequinha"; // [9] são quantos caracters
    printf("\n%d", x);
    printf("\ny= %f", y);
    printf("\ny= %.1f", y); //.1 é a quantidade de casas decimais.
    printf("\nvalor de z= %lf", z); //%lf = long float (double).
    printf("\nSexo: %c", sexo); //%c = char; valor para caracteres.
    printf("\nNome: %s", nome); //%s = string; valor nomes.
    getch();

    return 0; //
}