#include <stdio.h>
int main (int argc, char * argv[])
{
    int condition = 10;

    while (condition)
    {
        printf ("%d\n", condition);

         condition--;

        if (condition<0)
        {
            break;
        }
    }
}
