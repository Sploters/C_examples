#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
float num, i, f, a;
printf("Digite o numero:");
scanf("%f", &num);
i = floor(num);
f = num - i;
a = round(num);
printf("%f",i);
printf("\n%f",f);
printf("\n%f",a);
getch();
return 0; //
}