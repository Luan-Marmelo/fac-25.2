#include <stdio.h>
#define TAM 4
void paresImpares(int vNumX[TAM]){
       
    int i;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
    }
    // Números em posições ímpares
    for(i=0; i<TAM; i+=2){
        printf("%d", vNumX[i]);
    }

    printf(" ");

    // Números em posições pares
    for(i=1; i<TAM; i+=2){
        printf("%d", vNumX[i]);
    }
}   
int main()
{
    int vNumX[TAM]; paresImpares(vNumX);

    return 0;
}
