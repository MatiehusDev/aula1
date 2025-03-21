/*Programa para converter altura em metros para ft e pol*/
#include <stdio.h>
float maior(int a, int b);

int main(){
    int f; //número de pés
    float p; //número de polegadas
    float h; //número em metros

    //Captura altura em metros
    printf("Digite sua altura: \n");
    scanf("%f", &h);

    //Calcula a altura em pés e polegadas
    h = 100*h; //converter para cm
    f = (int) (h/30.48); //converte para pés
    p = (h-f*30.48)/2.54; //converte para polegadas

    //Exibe a altura convertida
    printf("Altura: %dft %.1fpol\n", f, p);

    //Funçâo que substitui if - else
    int a, b, valor;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);
    
    valor = maior(a,b);
    printf("Maior valor: %d", valor);

    return 0;
}
float maior(int a, int b){
    return a>b?a:b;
}

