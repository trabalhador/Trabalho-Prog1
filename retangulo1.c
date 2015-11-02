#include <stdio.h>

int main(){
    
    int a=0, l=0;
    int alt, lar;
    int recomeco = 0;
    char fim, caracter;
    
    while( recomeco == 0 ){
        
        printf("Informe a altura\n");
        scanf("%d", &alt);
        printf("Informe a largura\n");
        scanf("%d", &lar);
        printf("Escolha um caracter de sua preferência?\n");
        scanf(" %c", &caracter);
        
        printf("Olá, meu nome é Matheus Avila e o seu retângulo ficou assim:\n");
        
        for( a; a < alt; a++ ){
            for( l; l < lar; l++ ){
                if( a == 0 || a == alt - 1 || l == 0 || l == lar - 1){
                    printf(" %c ", caracter);
                }else{
                    printf("   ");
                }   
            }
            
            l = 0;
            printf( "\n" );
        }
        
        printf("Deseja continuar (s/n)?\n");
        scanf(" %c", &fim);
        
        if( fim == 'n' ){
            recomeco = 1;
        }
        
        alt = 0;
        lar = 0;
        a = 0;
        
    }

    return 0;
}