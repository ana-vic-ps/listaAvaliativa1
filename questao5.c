#include <stdio.h>

/* 5. Leia um vetor de 10 posições.Contar e escrever quantos valores pares ele possui. */

int main()
{

    int vet[10], i, soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d° número do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            soma += 1;
        }
    }
    printf("O vetor possui %d elemento pares.", soma);
}