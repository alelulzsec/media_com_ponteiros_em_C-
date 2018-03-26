#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int main(){
    int i;
    int vetor[MAX];
    int *pvetor=NULL;
    float s=0;
    float med;

    pvetor = vetor;

   puts("Digite as idades: ");
    for(i=0;i<MAX;i++){
        scanf("%d",(pvetor+i) );
    }

    for(i=0;i<MAX;i++){
        s+= *(pvetor+i) ;   // s = s + vetor[i];
    }

    med= s/MAX;

printf("Media das idades = %.2f \n", med);

return 0;
}
