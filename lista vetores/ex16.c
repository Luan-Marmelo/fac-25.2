#include <stdio.h>
#define TAM 5
//Verifica a existencia de um numero em um vetor.
void occorrencia(int vNumX[TAM]){
       
    int i, vlrRecebido, numEncontrado=0;
    
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    
    printf("\nInsira um valor para ver se ele está no vetor: ");
    scanf("%d",&vlrRecebido);

    for(i=0; i<TAM; i++){
        if(vNumX[i]==vlrRecebido){
            numEncontrado++;
        }
    }    

    if(numEncontrado>0){
            printf("\n1");
    } else{
            printf("\n0");
        }
}      
int main(){
    int vNumX[TAM]; 
    occorrencia(vNumX);
    printf("\n");
    return 0;
}