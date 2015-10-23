#include <stdio.h>

int main ()

{
    float peso;
    float altura;
    float indice;
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    indice= peso / (altura*altura);
    
    if (indice<=19){
        printf("Você está abaixo do peso e seu imc é: %0.0f", indice);
    }
    else if (indice<25){
        printf("Você está em seu peso ideal e seu imc é: %0.0f", indice);
    }
    else if (indice<=30){
        printf("Você está acima do peso e seu imc é: %0.0f", indice);
    }
    else if (indice>31){
        printf("Você está obeso e seu imc é: %0.0f", indice);
    }
    
    return 0;
    }