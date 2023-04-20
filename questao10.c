#include <stdio.h>

/* 10. Faça um programa para ler a nota da prova de 15 alunos e armazene em um vetor, calcule e imprima a média geral. */

int main()
{

    float vet[15], media, soma = 0;
    int i;

    for (i = 0; i < 15; i++)
    {

        printf("Digite a %iª nota: ", i + 1);
        scanf("%f", &vet[i]);
    }

    printf("\nNotas: ");

    for (int i = 0; i < 15; i++)
    {
        printf(" %0.1f ", vet[i]);
        soma += vet[i];
    }

    printf("\n\nSoma das notas: %0.1f", soma);

    media = soma / 15;
    
    printf("\n\nMédia das notas: %0.1f", media);
}