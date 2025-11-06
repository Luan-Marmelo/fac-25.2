#include <stdio.h>
#define TAM 5

//Recebe um vetor, pergunta ao usuário o número de uma posição, e exiba o valor da posição. Término: valor de posição inválida
void identificador(int vNumX[TAM]){
       
    int i;
    
    for(i=0; i<TAM; i++){
        printf("\nDigite o %d° número de X: " ,i+1);
        scanf("%d",&vNumX[i]);
    }

    int pos;
    printf("\nDigite a posição que deseja consultar (1 a 5): ");
        scanf("%d", &pos);
    if(pos>=1 && pos<TAM){
        printf("\nO valor na posição %d é %d", pos, vNumX[pos-1]);
    } else {
        printf("\nPosição inválida.");
    }    
}   
int main()
{
    int vNumX[TAM]; identificador(vNumX);

    return 0;
}