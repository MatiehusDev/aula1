#include <stdio.h>
unsigned short int variavel1 = -100;

void imprime(void);

int main(){

    printf("Bytes usado pela variavel1: %d\n", sizeof(variavel1));
    printf("Endereço: %x\n", &variavel1);
    printf("Valor: %d\n", variavel1);
    imprime();

    return 0;
}
void imprime(){
    int variavel2 = 1000;
    printf("Endereço: %x\n", &variavel2);
    printf("Valor da variavel2: %d\n", variavel2);
}