#include <stdio.h>
int main (int argc, char * argv[])
{
    int condition = 1;

    while 
    (condition)
    {
        printf ("ok");

        condition=condition + 1;

        if (condition==10) 
        {
            break;
        }
    }
    
}