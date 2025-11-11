#include <stdio.h>
#define TAM 5
//Verifica a existencia de um numero em um vetor.
void occorrencia(int vNumX[TAM]){
       
    int i, vlrRecebido, posicaoEncontrado = -1;
    
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    
    printf("\nInsira um valor para ver se ele está no vetor: ");
    scanf("%d",&vlrRecebido);

    for(i=0; i<TAM; i++){
        if(vNumX[i]==vlrRecebido){
            posicaoEncontrado=vNumX[i]; 
        }
    }    

    if(posicaoEncontrado>0){
            printf("\nO numero %d aparece na %d° posição do vetor", vlrRecebido, posicaoEncontrado);
    } else{
            printf("\n-1");
        }
}      
int main(){
    int vNumX[TAM]; 
    occorrencia(vNumX);
    printf("\n");
    return 0;
}