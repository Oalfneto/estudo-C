#include <stdio.h>
int main () {
    int n[3],i;

    for (i=0;i<3;i++) {
        printf("Digite o valor de n[%d]:",i);
        scanf("%d",&n[i]);
    }

    int M=n[0];
    int m=n[0];

    for (i=0;i<3;i++) {
        if (M<n[i]){
            M=n[i];
        }
         if (m>n[i]){
            m=n[i];
        }
    }
    
    if (M==m) {
        printf("Todos numeros sao iguais");
    }
    else      {
        printf("O maior numero: %d\nO menor numero:%d",M,m);
    }  

    return 0;
}