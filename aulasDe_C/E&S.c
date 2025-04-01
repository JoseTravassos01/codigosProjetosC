#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#ifndef NULL
#define NULL ((void *)0)
#endif

int main(){

//     1. Faça um programa que:
// a) Crie/abra um arquivo texto de nome “arq.txt”;
// b) Permita que o usuário grave diversos caracteres neste arquivo, até que o usuário entre com o caractere
// ‘0’;
// c) Feche o arquivo;
// d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
//     FILE *arq1, *arq2;
//     char caractere = 'A';

//     arq1 = fopen("arq.txt", "wa");

//     if(arq1){
//         while(caractere != '0'){
//             printf("Informe um caractere ou 0 para sair: ");
//             scanf("%c", &caractere);

//             if(caractere != '0'){
//                 fputc(caractere, arq1);
//             }
//         }
//     }else {
//         printf("Não foi possivel abrir o arquivo \n");
//     }
//     fclose(arq1);

//     arq2 = fopen("arq.txt", "r");

//     if(arq2)
//     {
//         while (caractere = getc(arq2) != EOF)
//         {
//             printf("%c", caractere);
//         }
        
//     }else{
//         printf("Não foi possivel abrir o arquivo \n");
//     }
//     fclose (arq2);
//     arq2 = NULL;

// 2. Faça um programa que receba do usuário o nome de um arquivo texto e mostre na tela quantas linhas
// este arquivo possui.
    FILE *arq3;
    char nomeDoArquivo [12];
    int numeroDeLinhas = 0;

    printf("Digite o nome do arquivo \n");
    fgets (nomeDoArquivo, 12, stdin);

    arq3 = fopen(nomeDoArquivo, "r");

    if (arq3)
    {
        for (char c = getc(arq3); arq3 != EOF; getc(arq3))
        {
            if (c == '\n')
            {
                numeroDeLinhas = numeroDeLinhas + 1;
            }
        }
        printf("numero de linhas do arquivo \n %d", numeroDeLinhas);
        
    }else
    {
        printf("arquivo não encontrado");
    }
    fclose(arq3);   
    
}


