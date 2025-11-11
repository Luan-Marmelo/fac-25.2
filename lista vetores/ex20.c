#include <stdio.h>
#define TAM 5
//Altera os valores multiplos de sua posições para zero.
void mediaV(int vNumX[TAM]){
       
    int i, posicao;

    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
       
    for(i=0; i<TAM; i++){
        posicao = i + 1;
        if(vNumX[i]%posicao == 0){
            vNumX[i]=0;
            printf("\nVetor na %d° posição alterado para: %d", posicao, vNumX[i]);
        }
    }
    
}   
int main()
{
    int vNumX[TAM]; 
    mediaV(vNumX);
    printf("\n");
    return 0;
}