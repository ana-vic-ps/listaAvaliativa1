#include <stdio.h>

/* 1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o quarto valor armazenado no vetor, atribuindo a este o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha. */

int main()
{

    int A[] = {1, 0, 5, -2, -5, 7};
    int soma, i;

    printf("O vetor é: ");

    for (i = 0; i < 6; i++)
    {

        printf("%d ", A[i]);
    }
    soma = A[0] + A[1] + A[5];

    printf("\nA soma das posições A[0], A[1] e A[5] é: %d\n", soma);

    A[4] = 100;

    for (i = 0; i < 6; i++)
    {

        printf("\n%d\n ", A[i]);
    }
}