#include <stdio.h>
#define TAM 5
//Recebe um vetor, e exiba o maior valor armazenado nele.
void somaVetores(int vNumX[TAM]){
       
    int i, soma;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
    }

    for(i=0; i<TAM; i++){
        soma+=vNumX[i];
        
    }

    printf("\nA soma dos elementos do vetor é %d", soma);   
}   
int main()
{
    int vNumX[TAM]; 
    somaVetores(vNumX);
    printf("\n");
    return 0;
}