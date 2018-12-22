#include <stdio.h>
#include <stdlib.h>

/**
*   Israel da Rocha
*   Selection Sort
*
*
*/

typedef int TItem;

typedef struct{         ///estrutura a ser ordenada pela chave item
    TItem item;
}Celula;

int main(){
    int tam = 0, i = 0, j = 0, indice = 0, aux;

    ///printf("Digite a quantidade total de itens");
    scanf("%d", &tam);
    Celula valor[tam];

    ///printf("Agora digite o valor de cada um");
    for(i = 0; i < tam; i++)
        scanf("%d", &valor[i].item);


    for(i = 0; i < tam; i++){
        for(j = i; j < tam; j++){
            if(valor[j].item < valor[indice].item)
                indice = j;
        }
        aux = valor[i].item;
        valor[i].item = valor[indice].item;
        valor[indice].item = aux;

    }

    printar(valor, tam);


}

void printar(Celula vet[], int tam){

    int i;
 ///   printf("Itens: ");
    for(i=0; i< tam; i++){
        printf("%d ", vet[i].item);
    }
}
