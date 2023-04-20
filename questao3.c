#include <stdio.h>

/* 3. Ler um conjunto de números reais, armazenando-os em vetor e calcular o quadrado das componentes desse vetor, armazenando o resultado em
outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos. */

int main()
{

    int A[10], B[10], i;

    for (i = 0; i < 10; i++)
    {

        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nValores lidos: ");

    for (i = 0; i < 10; i++)
    {

        printf("%d ", A[i]);
    }

    printf("\nQuadrado dos valores lidos:");

    for (i = 0; i < 10; i++)
    {

        B[i] = A[i] * A[i];
        printf(" %d ", B[i]);
    }
}