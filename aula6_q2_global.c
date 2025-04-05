#include <stdio.h>

int s, p;

void somaproduto(int a, int b);

int main(){
    somaproduto(6,7);

    printf("Soma: %d\nProduto: %d\n", s, p);

    return 0;
}

void somaproduto(int a, int b){
    s = a + b;
    p = a * b;
}