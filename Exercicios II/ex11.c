#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main() {
float num, quad, cubo, r2, r3;
printf("Digite o valor do numero:");
scanf("%f", &num);
quad = pow(num,2);
cubo = pow(num,3);
r2 = sqrt(num);
r3 = pow(num, 1/3);
printf("%f",quad);
printf("\n%f",cubo);
printf("\n%f",r2);
printf("\n%f",r3);
getch();
return 0; //
}