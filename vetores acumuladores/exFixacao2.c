#include <stdio.h>

int eleicaoReiRainha(){
    int votosRainha[10] = {0}, votosRei[10] = {0}, numeroRei[10] = {0};
    int totalAlunos, i, votoRainha, votoRei;

    printf("Total de alunos que irão votar: ");
    scanf("%d", &totalAlunos);

    for(i=0; i < 10; i++){
        printf("Qual o numero do %i° candito a rei? ", i+1);
        scanf("%d", &numeroRei[i]);
    }
    for(i = 0; i < totalAlunos; i++){
        printf("Aluno %d, digite o número da sua candidata (101 a 110): ", i+1);
        scanf("%d", &votoRainha);
        printf("Aluno %d, digite o número do seu candidato a rei: ", i+1);
        scanf("%d", &votoRei);
            
        votosRainha[votoRainha - 101]++;
        votosRei[votoRei - numeroRei[0]]++;
    }


    int indiceRainha = 0, maxVotosRainha = votosRainha[0], maxVotosRei = votosRei[0], indiceRei = 0;   
    for(i = 1; i < 10; i++){
        if(votosRainha[i] > maxVotosRainha){
            maxVotosRainha = votosRainha[i];
            indiceRainha = i;
        }
        if(votosRei[i] > maxVotosRei){
            maxVotosRei = votosRei[i];
            indiceRei = i;
        }
    }

    printf("\nRainha eleita: candidata %d com %d votos\n", 101 + indiceRainha, maxVotosRainha);
    printf("Rei eleito: candidato %d com %d votos\n", numeroRei[indiceRei], maxVotosRei);
    return 0;
}

int main(void){
    eleicaoReiRainha();
    return 0;
}