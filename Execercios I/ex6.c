#include <stdio.h>
#include <stdlib.h> 

int main() {
    int var_A, var_B;
    printf("Digite o primeiro numero:");
    scanf("%d", &var_A);
    printf("Digite o segundo numero:");
    scanf("%d", &var_B);
    if (var_A > var_B)  { 
        printf("%d, %d", var_B, var_A);
    } else {
        printf("%d, %d", var_A, var_B);
    }
    getch();
return 0; //
}