#include <stdio.h>
#define TAM 4
void prodIntrnVtrs(int vNumX[TAM], int vNumY[TAM]){
       
    int i, soma;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
    }

    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de Y: " ,i+1);
        scanf("%d",&vNumY[i]);
    }
    
    soma=0;
    for(i=0; i<TAM; i++){
      soma+=vNumX[i]*vNumY[i];
    }
    
    printf("O produto interno de X e Y é %d ", soma);
}    
    
int main()
{
    int vNumX[TAM], vNumY[TAM];
    
    prodIntrnVtrs(vNumX, vNumY);

    printf("\n");

    return 0;
}