#include <stdio.h>
#define TAM 5
//Exibe a ocorrencia de um numero em um vetor.
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
            if(numEncontrado==1){
                printf("\nO valor %d se encontra no vetor e aparece 1 vez", vlrRecebido);
            } else{
              printf("\nO valor %d se encontra no vetor e aparece %d vezes", vlrRecebido, numEncontrado);
            }
    } else if(numEncontrado==0){
            printf("\nO valor %d não se encontra no vetor", vlrRecebido);
        }
}      
int main(){
    int vNumX[TAM]; 
    occorrencia(vNumX);
    printf("\n");
    return 0;
}