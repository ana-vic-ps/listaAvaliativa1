#include <stdio.h>

/* 9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa. */

int main()
{

    int vet[6], i;

    printf("DIGITE APENAS VALORES PARES. \n");

    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor da posição %i: ", i + 1);
        scanf("%i", &vet[i]);

        if (vet[i] % 2 != 0)
        {
            printf("DIGITE APENAS VALORES PARES.\n");
            printf("Digite o valor da posição %i: ", i + 1);
            scanf("%i", &vet[i]);
        }
    }
    printf("\nVetor: ");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", vet[i]);
    }

    printf("\n\nOdem inversa: ");

    for (i = 5; i >= 0; i--)
    {
        printf(" %i ", vet[i]);
    }
}