#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

float sal_atual, novo_sal;
printf("Digite o salário atual do funcionário ");
scanf("%f", &sal_atual);
if (sal_atual <= 500) {
    novo_sal = sal_atual * 1.2;
} else {
    novo_sal = sal_atual * 1.1;
}
printf("Novo salário = %f", novo_sal);

getch();
return 0; //
}