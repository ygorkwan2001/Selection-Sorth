#include <stdio.h>
#include <stdlib.h>

void selectionSorth(int Vet[],int n){
    

    int Menor, troca;

    for(int i=0;i<n-1;i++){
        Menor=i;
        for(int j=i+1 ; j<n ; j++){
            if(Vet[Menor] > Vet[j])
                Menor=j;
        }
        if(i!=Menor){
            troca=Vet[i];
            Vet[i]=Vet[Menor];
            Vet[Menor]=troca;
        }
    }
}

int main(){

    int i;
    int vetorai[1000];


    srand(time(NULL));
    for(i = 0; i < 1000; i++)
        vetorai[i] = rand();

    printf("\n\n ");

    selectionSorth(vetorai,1000);

    for(i = 1; i < 1000; i++){
       printf("%d-", vetorai[i]);
    }

    printf("\n\n\n");

    return 0;
}

