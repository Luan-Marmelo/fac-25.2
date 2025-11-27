#include <stdio.h>
#include <string.h>

int busca(int n, char vet[][30], char vResp[]){
    int i;
    for (i=0; i< n; i++) {
        if (strcmp(vet[i],vResp)==0){
        return i;
    }
    }
    return -1;

    
}


int main()
{
    char vPaises[5][30]={"Canada","Brasil","Franca","Espanha","Inglaterra"};
    char vCapitais[5][30]={"Ottawa","Brasilia","Paris","Madrid","Londres"};
    char vResp[30];
    int i, pos;
    char resp;
    
    printf("Digite a função desejada(P ou C, F encerra)");
    scanf(" %c",&resp);
    while(resp!='F' && resp!='f'){
        if(resp=='p' || resp=='P'){
            printf("Escreva o País desejado:");
            scanf(" %[^\n]",vResp);
            pos=busca(5,vPaises,vResp);
            if(pos>=0){
                printf("A capital do País escolhido é: %s\n",vCapitais[pos]);
                
            }
            else{
                printf("País inválido");
            }
        }
        else if(resp=='c' || resp=='C'){
            printf("Escreva a Capital desejada:");
            scanf(" %[^\n]",vResp);
            pos=busca(5,vCapitais,vResp);
            if(pos>=0){
                printf("O país da capital escolhida é: %s\n",vPaises[pos]);
                
            }
            else{
                printf("Capital inválida");
            }
        }
        else{
            printf("Função inválida\n");
        }
        printf("Digite a função desejada(P ou C, F encerra)");
        scanf(" %c",&resp);
    }

    return 0;
}
