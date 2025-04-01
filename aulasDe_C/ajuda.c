char maiusculo(char letra)
{
    int number = letra;
    number = number - 32;
    letra = number;
    //char retorno = letra;
    return letra;
}

// int maior(int vet[])
// {
//     int j = 0;
//     int maior = vet[j];
//     while(j < 9)
//     {
//         if(vet[j] < vet[j + 1])
//         {
//             maior = vet [ j + 1];
//         }
//         j++;
//     }
//     int retorno = maior;
//     return retorno;
// }
