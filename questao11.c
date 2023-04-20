#include <stdio.h>

/* 11. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de numeros negativos e a soma dos números
positivos desse vetor */

int main()
{

    float vet[10];
    int somaNeg = 0, somaPos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%f", &vet[i]);
    }
    printf("\nVetor: ");

    for (int i = 0; i < 10; i++)
    {
        printf(" %0.1f ", vet[i]);

        if (vet[i] > 0)
        {
            somaPos += vet[i];
        }
        else
        {
            somaNeg += 1;
        }
    }

    printf("\n\nTotal de números negativos: %i \nSoma dos números positivos: %i", somaNeg, somaPos);
}