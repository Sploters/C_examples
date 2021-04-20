#include <stdio.h>
#include <stdlib.h> 

int main() {
    char senha[12] = "batatafrita";
    char nova_senha[12];
    printf("Digite sua senha: ");
    scanf("%s", nova_senha);

    if (strcmp (nova_senha,senha) == 0)  { 
        printf("Acesso permitido");
    } else {
        printf("Voce nao tem acesso ao sistema");
    }
    getch();
return 0; //
}