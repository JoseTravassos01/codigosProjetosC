//  1. Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
//    Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros.
//    Imprima os valores das variáveis antes e após a modificação.

// #include <stdio.h>

// int main() {
//     int x = 10;
//     float y = 3.14f;
//     char c = 'A';

//     int *px = &x;
//     float *py = &y;
//     char *pc = &c;

//     printf("%d %.2f %c\n", x, y, c);

//     *px = 20;
//     *py = 6.28f;
//     *pc = 'B';

//     printf("%d %.2f %c\n", x, y, c);

//     return 0;
// }

// /* 2. Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida,
//    compare seus endereços e exiba o conteúdo do maior endereço. */

// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (&a > &b) {
//         printf("%d\n", a);
//     } else {
//         printf("%d\n", b);
//     }

//     return 0;
// }

// 3. Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética
//  de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido. 

#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i) * 2);
    }
    printf("\n");
    return 0;
}
