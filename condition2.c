#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 6;
    int b = 6;

    if (a < b)
    {
        printf("a a acheté moins de produits que b\n");
    }

    if (a > b)
    {
        printf( "a a acheté plus de produit que b\n");
    }

    if (a == b)
    {
        printf("a a acheté autant de produits que b\n");
    }
}