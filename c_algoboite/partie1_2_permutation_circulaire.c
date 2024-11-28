#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Entrez trois valeurs : \n");

    printf("A :\n");
    a = scanf("%d", &a);
    printf("B :\n");
    b = scanf("%d", &b);
    printf("C :\n");
    c = scanf("%d", &c);

    a, b, c = c, a, b;

    printf("A = %d -- B = %d -- C = %d\n", a, b, c);

    return 0;
}