#include <stdio.h>


int main() {

    //Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.
    // int x = 1;
    // for ( int i = 0; i < 5 ; i++)
    // {
    //     int x1 = 3 * x;
    //     x = x1;
    //     printf(": %d", x);
    // }

    //Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
    
    // int x = 0;
    // while(x < 100000)
    // {
    //     x = x + 100;
    //     printf(": %d", x);
    // }

    //Faça um programa que leia 10 números e escreva o maior e o menor valor lido

    int x [10];
    int i = 0;
    while (i < 10)
    {
        printf(": %d", i + 1);
        scanf("%d", &x[i]);
        i++;
    }
    int y = 0;
    int j = 0;
    int maior = x [j];
    while( j < 10)
    {
        if( maior < x[j + 1])
        {
            maior = x[j + 1];
        }
        j++;
    }
    printf("maior numero %d", maior);

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
