#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Entrez deux valeurs : \n");

    printf("A :\n");
    a = scanf("%d", &a);
    printf("B :\n");
    b = scanf("%d", &b);

    a, b = b, a;
    printf("A = %d -- B = %d\n", a, b);
    return 0;
}