#include <stdio.h>

/* 7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se
encontra. */

int main()
{

    int vet[10], maior, posMaior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    system("cls");
    printf("Vetor: ");

    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", vet[i]);
    }

    maior = vet[0];
    posMaior = 0;

    for (int i = 1; i < 10; i++)
    {
        if (vet[i] > maior)

        {
            maior = vet[i];
            posMaior = i;
        }
    }
    printf("\n\nMaior valor: %d - posição: %d", maior, posMaior + 1);
}