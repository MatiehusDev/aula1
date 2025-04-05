#include <stdio.h>

void somaproduto(int a, int b, int *c, int *d);

int main(){
    int s, p;

    somaproduto(6,7,&s,&p);

    printf("Soma: %d\nProduto: %d\n", s, p);

    return 0;
}

void somaproduto(int a, int b, int *c, int *d){
    *c = a + b;
    *d = a * b;
}