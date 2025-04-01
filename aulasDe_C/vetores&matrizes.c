#include <stdio.h>


int main() {

    int A [2];
    int i = 0;
    while( i < 2)
    {
        printf("digite um numero:");
        scanf("%d", &A[i]);
        i++;
    }

    printf("%d", A[1]);

    
    // int j = 0;
    // while (j < 10)
    // {
    //     if (A[j] < 0)
    //     {
    //      A[j] = 0;
    //     }
    //     printf("\n %d", A[j]);
    //     j++;
    // }
    
    

//     Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
// deve executar os seguintes passos:
// a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
// b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor
// e mostre na tela esta soma;
//     char SF = 'b';
//     char c = 'b';

//     printf("Você quer fazer soma?\n");
//     printf("Y/N\n");
//     scanf(" %c", &c);
//     if (c == 'Y')
//     {
//         int sum = 0;
//         while(SF != 'S')
//         {
//             int j;
//             printf("digite qual posição você vai somar\n");
//             scanf("%d", &j);
//             printf("Para (S)air digite S\n");
//             scanf(" %c", &SF);
//             sum = sum + A[j];
//             printf("resultado da soma %d\n", sum);
//         }
//         printf("resultado da soma %d/n", sum);
//     }
    
  
 }
