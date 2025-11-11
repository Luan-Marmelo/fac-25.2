#include <stdio.h>
#define TAM 5
//Exibe os valores multiplos de suas posições.
void mediaV(int vNumX[TAM]){
       
    int i, posicao;

    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    
    printf("\nValores múltiplos de suas posições: ");   
    for(i=0; i<TAM; i++){
        posicao = i + 1;
        if(vNumX[i]%posicao == 0){
            printf("%d ", vNumX[i]);
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