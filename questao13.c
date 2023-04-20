#include <stdio.h>

/* 13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor. */

int main()
{

    int vet[5], i, maior, menor, posMenor, posMaior;

    for (i = 0; i < 5; i++)
    {

        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("\nVetor: ");

    for (i = 0; i < 5; i++)
    {

        printf(" %i ", vet[i]);
    }

    maior = vet[0];
    posMaior = 0;

    for (i = 0; i < 5; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            posMaior = i;
        }
    }

    menor = vet[0];
    posMenor = 0;

    for (i = 0; i < 5; i++)
    {
        if (vet[i] > maior)
        {
            menor = vet[i];
            posMenor = i;
        }
    }

    printf("\n\nMaior valor: %i - posição: %i", maior, posMaior + 1);
    printf("\n\nMenor valor: %i - posição: %i", menor, posMenor + 1);
}