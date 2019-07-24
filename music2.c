#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) 
{

char cordes[6]={'E','A','D','G','B','E'};
char letter; 
int i;


printf("enter a letter:");
    scanf ("%c", &letter);


for (i=0 ; i<6 ; i++)
{
    if ( letter == cordes[i])
  {  
    printf("%c est la corde num %d\n", cordes[i],i+1);

}
}
return 0;



}