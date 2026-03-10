#include <stdio.h>
int main () {
    int n;

    printf("Digite um numero:");
    scanf("%d",&n);

   if (n==0) {
    printf("O seu numero = ZERO");
   }
   else if ((n % 2)==0) {
    printf("O seu numero = PAR");
   }
   else {
    printf("O seu numero = IMPAR");
   }

    return 0;
}