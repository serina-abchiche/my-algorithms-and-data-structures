#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b = 0, cpt = 0;

    printf("a = ?\n");
    scanf("%d", &a);

    while(b == 0)
    {
        printf("b = ?\n");
        scanf("%d", &b);
    }

    while(a >= b)
    {
        a = a - b;
        cpt = cpt + 1;
    }

    printf("Quotient: %d, Restant: %d\n", cpt, a);

}
