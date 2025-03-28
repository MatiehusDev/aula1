#include <stdio.h>
int main(){
    
    char op = 'i';

    /*do{
        printf("Voce deseja prosseguir com a execucao? (S/N) \n");
        scanf("%c%*c", &op);
    }while(op != 's' && op != 'S' && op != 'n' && op != 'N');

    printf("O usuario decidiu ");

    if(op == 's' || op == 'S'){
        printf("prosseguir...\n");
    }
    else if(op == 'n' || op == 'N'){
        printf("finalizar o programa...\n");
    }*/
    
    printf("Voce deseja prosseguir com a execucao? (S/N) \n");
    scanf("%c%*c", &op);

    switch(op){
        case 's':
        case 'S':
            printf("prosseguir...\n");
        break;
        case 'n':
        case 'N':
            printf("finalizar o programa...\n");
        break;
        default:
            printf("nao entendeu...\n");
    }
    return 0;
}