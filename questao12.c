#include <stdio.h>

/* 12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamnete com o maior, o menor e a media dos
valores. */

int main()
{

    int vet[5], maior, menor, soma = 0, i;
    float media;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("\nVetor: ");

    for (i = 0; i < 5; i++)
    {
        printf(" %i ", vet[i]);
        soma += vet[i];
    }

    maior = vet[0];
    menor = vet[0];

    for (int i = 1; i < 5; i++)
    {
        if (vet[i] > maior)

        {
            maior = vet[i];
        }
        else if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }

    media = soma / 5;

    printf("\n\nMaior valor: %i", maior);
    printf("\nMenor valor: %i", menor);
    printf("\nMédia dos valores: %0.1f", media);
}