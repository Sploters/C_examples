#include <stdio.h>
#include <stdlib.h>

int main() {
int x;
printf("Digite um valor:");
scanf("%d%*c", &x);

printf("\n%d x 0 = %d",x,x*0);
printf("\n%d x 1 = %d",x,x*1);
printf("\n%d x 2 = %d",x,x*2);
printf("\n%d x 3 = %d",x,x*3);
printf("\n%d x 4 = %d",x,x*4);
printf("\n%d x 5 = %d",x,x*5);
printf("\n%d x 6 = %d",x,x*6);
printf("\n%d x 7 = %d",x,x*7);
printf("\n%d x 8 = %d",x,x*8);
printf("\n%d x 9 = %d",x,x*9);
printf("\n%d x 10 = %d",x,x*10);
getch();
return 0; //
}