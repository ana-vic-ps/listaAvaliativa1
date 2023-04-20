#include <stdio.h>

/* 8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa. */

int main()
{

    int vet[6], i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("\nVetor: ");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", vet[i]);
    }

    printf("\nOdem inversa: ");

    for (i = 5; i >= 0; i--)
    {
        printf(" %i ", vet[i]);
    }
}