#include <stdio.h>
#include <stdlib.h> 

int main() {
    char nome[30];
    float nota1, nota2, nota3, media;
    int faltas, aulas;
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite a nota da p1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da p2: ");
    scanf("%f", &nota2);

    printf("Digite a nota da p3: ");
    scanf("%f", &nota3);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);
    
    aulas = 80;
    media = (nota1 + nota2 + nota3)/3;
    if (media < 7) {
        printf("Reprovado por Media");
    }
    else {
         if(faltas == aulas*0.25){
             printf("Reprovado por Falta");
         } else {
             printf("Aprovado");
         }
    }


    getch();
return 0; //
}