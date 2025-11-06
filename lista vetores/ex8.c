#include <stdio.h>
#define TAM 5
//Recebe um vetor e exibe a quantidade de números ímpares armazenados nele.
void qtdNumImpar(int vNumX[TAM]){
       
    int i, soma=0;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
        if(vNumX[i]%2==1){
        soma++;
        }
    }

    printf("\nA quantidade de números impares no vetor é %d", soma);   
}   
int main()
{
    int vNumX[TAM]; 
    qtdNumImpar(vNumX);
    printf("\n");
    return 0;
}