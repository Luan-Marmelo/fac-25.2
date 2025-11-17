#include <stdio.h>

int eleicaoRainha(){
    int votosRainha[10] = {0};
    int totalAlunos, i, voto;

    printf("Total de alunos que irão votar: ");
    scanf("%d", &totalAlunos);

    for(i = 0; i < totalAlunos; i++){
        printf("Aluno %d, digite o número da sua candidata (101 a 110): ", i+1);
        scanf("%d", &voto);
            
        votosRainha[voto - 101]++; // incrementa contagem da candidata
    }


    int indiceRainha = 0, maxVotos = votosRainha[0];
    for(i = 1; i < 10; i++){
        if(votosRainha[i] > maxVotos){
            maxVotos = votosRainha[i];
            indiceRainha = i;
        }
    }

    printf("\nRainha eleita: candidata %d com %d votos\n", 101 + indiceRainha, maxVotos);
    return 0;
}

int main(void){
    eleicaoRainha();
    return 0;
}