#include <stdio.h>
#define TAM 5
//Exibe a média dos valores armazenados em um vetor.
void mediaV(int vNumX[TAM]){
       
    int i, soma;
    float media;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);    
    }
    for(i=0; i<TAM; i++){
        soma+=vNumX[i];
    }
    media=soma/TAM;
    printf("\nA média dos valores do vetor é %.2f", media);
    printf("\nValores menores que a média: ");
    
    for(i=0; i<TAM; i++){
        if(vNumX[i]<media){
            printf("%d ", vNumX[i]);
        }
    }
    printf("\nValores maiores que a média: ");
    
    for(i=0; i<TAM; i++){
        if(vNumX[i]>media){
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