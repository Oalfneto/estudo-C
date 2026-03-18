#include <stdio.h>
void ordenacao (int n,int v[]) {

    if (n==1) return;// caso base (1 numero pra ordenar)//

    else {
        for (int i=0;i<n-1;i++) {

            if (v[i]>v[i+1]) {
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
                
        }    
    }
    
    ordenacao(n-1,v);
 
}

int main () {
    int vet[5],i=0;
    for (i=0;i<5;i++) {
        printf("Digite o valor de n[%d]:",i);
        scanf("%d",&vet[i]);
    }

    ordenacao(5,vet);

    for (i=0;i<5;i++) {
        printf("%d ",vet[i]);
    }
}

