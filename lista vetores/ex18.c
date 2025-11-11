#include <stdio.h>
#define TAM 5
//Verifica a existencia de um numero em um vetor.
void occorrencia(int vNumX[TAM]){
       
    int i, pares=0;
    
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    
    for(i=0;i<TAM-1;i++){
        if((vNumX[i]%5==0) && (vNumX[i+1]%5==0)){
            pares++;
        } 
    }
    printf("\nQuantidade de pares de números consecutivos múltiplos de 5: %d", pares);
}      
int main(){
    int vNumX[TAM]; 
    occorrencia(vNumX);
    printf("\n");
    return 0;
}