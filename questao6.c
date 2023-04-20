#include <stdio.h>

/* 6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o meior e o menor elemento do vetor.*/

int main()
{

    int vet[10], maior, menor;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    system("cls");
    printf("Vetor: ");

    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for (int i = 1; i < 10; i++)
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
    printf("\n\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
}