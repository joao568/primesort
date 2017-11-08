#include <stdio.h>

int EhPrimo(int n){
    int ehPrimo=1, d=2;
    if(n==1){
        return 0;
    }
    if(n<=1){
        ehPrimo=0;
    }
    while(ehPrimo==1 && d<=n/2){
        if(n%d==0){
            ehPrimo=0;
        }
        d=d+1;
    }
}

void ordena (int vet[], int n) {
    int k, j, aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {
            if (vet[j] < vet[j + 1]) {
                aux          = vet[j];
                vet[j]     = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

int main(){
    int n=0, ehPrimo=0, i=0, vetor[100], p;
    while(n!=-1){
        scanf("%d", &n);
        ehPrimo=EhPrimo(n);
        if(ehPrimo==0){
            vetor[i]=n;
            i++;
        }
    }
    vetor[i]=-1;
    ordena(vetor,i);
    for(p=0;p<i;p++){
        printf("%d\n", vetor[p]);
    }

return 0;
}
