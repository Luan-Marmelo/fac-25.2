#include <stdio.h>
#define TAM 5
//Recebe um vetor e exibe quais valores são menores que o valor armazenado na última posição do vetor recebido
void qtdNumImpar(int vNumX[TAM]){
       
    int i;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    for(i=0; i<TAM; i++){
        if(vNumX[i]<vNumX[TAM-1]){
        printf("\n%d é menor que %d(último valor do vetor)", vNumX[i], vNumX[TAM-1]);
        }
    }  
}   
int main()
{
    int vNumX[TAM]; 
    qtdNumImpar(vNumX);
    printf("\n");
    return 0;
}