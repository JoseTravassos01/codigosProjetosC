#include <stdio.h>
#include <string.h>


int func_fat(int fat)
{
    int aux = 1;
    int i = fat;
    while(i > 1 )
    {
        fat = fat * (i - 1);
        i--;
    }
    return fat;
}

int main()
{
    int fat = 0;
    int fatorial = 0;

    printf("digite o numero que deseja fazer o fatorial \n");
    scanf("%d", &fat);

    fatorial = func_fat(fat);

    printf("o fatorial de é %d", fatorial); 
    
return 0;
}