#include <stdio.h>
#define TAM 4
void prodIntrnVtrs(int vNumX[TAM]){
       
    int i;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
    }

    for(i=TAM-1; i>=0; i--){
        printf("%d", vNumX[i]);
    }
}   
int main()
{
    int vNumX[TAM];
    prodIntrnVtrs(vNumX);

    printf("\n");

    return 0;
}