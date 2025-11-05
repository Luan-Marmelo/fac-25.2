#include <stdio.h>
// Função para determinar o percentual mínimo e máximo de bolsa conforme área e CR
void percntBolsas(int area, float cr, float *percntMin, float *percntMax){
    if(cr>=9.0){
        *percntMin=0.30;
        if(area==1){
            *percntMax=0.40;
        }  else{
            *percntMax=0.35;
        }
    }
    else if(cr>=8.0){
        *percntMin=0.10;
        if(area==1){
            *percntMax=0.15;
        }
        else{
            *percntMax=0.12;
        }
    }    
    else if(cr>=7.0){
        *percntMin=0.05;
        *percntMax=0.05;
        }
    else{
        *percntMin=0.00;
        *percntMax=0.00;
    }    
}
// Função para separar a matrícula em área, curso e sequencial
// Precisa ter 5 dígitos
void matriculaSeparada(int matricula, int *area, int *curso, int *sequencial){
    *area=matricula/10000;
    *curso=(matricula%10000)/1000;
    *sequencial=matricula%1000;
}

// Função para calcular o percentual de bolsa para um aluno
float umAluno(int matricula, int numDiscp, float cr){
    int area, curso, sequencial;
    float percntMin, percntMax, percntTotal, percntFinal;
    matriculaSeparada(matricula, &area, &curso, &sequencial);
    percntBolsas(area, cr, &percntMin, &percntMax);
    percntTotal=percntMin+(0.05*numDiscp);
    if(percntTotal<=percntMax){
        percntFinal=percntTotal;
    } else{
       percntFinal=percntMax;
    }
    return percntFinal;
}
int main(){
    int matricula, numDiscp, numBolsistas, numPercntMaxRecebido;
    float cr, percntDoAluno, percntMedBolsas, percntMaxRecebido, somaPercnt;
    printf("===============================\n");
    printf("===============================\n");
    printf("     Calculadora de bolsas     \n");
    printf("===============================\n");
    printf("===============================\n");
    numBolsistas=0;
    somaPercnt=0;
    numPercntMaxRecebido=0;
    matricula=1;
    while(matricula>0){
        printf("Qual é a matrícula do aluno?(0 para finalizar): \n");
        scanf("%d", &matricula);
        if(matricula==0){
            break;
        }
        printf("Quantas disciplinas cursa?: \n");
        scanf("%d", &numDiscp);
        printf("Qual o valor do CR?: \n");
        scanf("%f", &cr);
        percntDoAluno=umAluno(matricula, numDiscp, cr);
        printf("Para o aluno de matricula %d é recomendado %.2f%% de bolsa.\n", matricula, percntDoAluno*100);
        // Acumulações para o relatório final
        if(percntDoAluno>0){
            numBolsistas++;
            somaPercnt+=percntDoAluno;
        }
        if(percntDoAluno>percntMaxRecebido){
            percntMaxRecebido=percntDoAluno;
            numPercntMaxRecebido=1;
        } else if(percntDoAluno==percntMaxRecebido){
            numPercntMaxRecebido++;
        }
    }
    // Cálculo do percentual médio das bolsas
    percntMedBolsas=somaPercnt/numBolsistas;
    printf("===============================\n");
    printf("===============================\n");
    printf("        Relatório final        \n");
    printf("===============================\n");
    printf("===============================\n");
    printf("Numero de bolsistas: %i\n", numBolsistas);
    printf("Percentual médio das bolsas: %.2f%%\n", percntMedBolsas*100);
    printf("Maior percentual: %.2f%%\n", percntMaxRecebido*100);
    printf("Numero de alunos com o maior percentual: %.i\n", numPercntMaxRecebido);
    return 0;
}