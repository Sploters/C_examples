#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main() {
float num1, num2, r1, r2;
printf("Digite o valor do primeiro numero:");
scanf("%f", &num1);
printf("Digite o valor do segundo numero:");
scanf("%f", &num2);
r1 = pow(num1,num2);
r2 = pow(num2,num1);
printf("%f",r1);
printf("\n%f",r2);
getch();
return 0; //
}