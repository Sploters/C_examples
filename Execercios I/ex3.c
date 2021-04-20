#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n1;
    printf("Digite um numero:");
    scanf("%d", &n1);
    if (n1 % 2 == 0) { 
        printf("Esse numero e par");
    } else {
        printf("Esse numero e impar");
    }
    getch();
return 0; //
}