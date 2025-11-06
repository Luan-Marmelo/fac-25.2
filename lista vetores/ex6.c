#include <stdio.h>
#define TAM 5
//Recebe um vetor, e exiba o maior valor armazenado nele.
void identificador(int vNumX[TAM]){
       
    int i, maiorValor;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
    }

    for(i=0; i<TAM; i++){
        if(vNumX[i]>maiorValor){
            maiorValor=vNumX[i];
        }
    }

    printf("\nO maior valor do vetor é %d", maiorValor);   
}   
int main()
{
    int vNumX[TAM]; identificador(vNumX);
    printf("\n");
    return 0;
}