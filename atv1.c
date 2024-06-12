// faça um algoritmo que receba dois números e ao final mostre o resultado da soma dos dois numeros lidos

#include <stdio.h>

int main()
{
    int n1, n2, soma;

    scanf("%i", &n1);
    scanf("%i", &n2);

    soma = n1 + n2;
    printf("Resultado da soma dos dois números: %i", soma);

    return 0;
}
