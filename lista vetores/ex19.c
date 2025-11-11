#include <stdio.h>
#define TAM 5
//Verifica se os elementos do vetor estão em ordem crescente.
void ordem(int vNumX[TAM]){
       
    int i, ordem=1;
    
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    
    for(i=0;i<TAM-1;i++){
        if(vNumX[i]>vNumX[i+1]){
            ordem=0;
            break;
        }
    }
    printf("%d", ordem);
}      
int main(){
    int vNumX[TAM]; 
    ordem(vNumX);
    printf("\n");
    return 0;
}