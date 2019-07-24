#include <stdio.h>
#include <stdlib.h>

int multiply ( int a, int b)

{

    return (a*b);
}

int square (int a){
 return (a*a);
} 

int max_2 ( int a, int b){

if (a>b){
return a;
}else if( b > a){
return b;

}
}

int main (int argc, char*argv[]){

    
printf("Bonjour!\n");

int nb1= 4; int nb2= 2;

int result= multiply (nb1, nb2);


printf("%d\n",result);


int nb3; 
printf("donne moi un nombre\n");
scanf("%d", &nb3);
int head= square(nb3);
printf("le resultat est %d\n", head);

//**************************************************

int nb8, nb9;
printf("donne moi un chiffre pour dire qui est le plus grand\n");
scanf("%d", &nb8);
printf("donne moi un deuxieme chiffre pour dire qui est le plus grand\n");
scanf("%d", &nb9);

int bigger=max_2(nb8,nb9);
printf(" the result is %d\n", bigger);


return 0;
}





