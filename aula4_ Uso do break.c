#include <stdio.h>
int main(){
    int numeros[] = {3, 7, 9, 15, 22, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 9;
    int encontrado = 0;

    for(int i = 0; i < tamanho; i++){
        if(numeros[i] == busca){
            printf("Numero %d encontrado na posicao %d. \n", busca, i);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado){
        printf("Numero %d nao encontrado. \n", busca);
    }
    return 0;
}