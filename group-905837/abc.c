/*
** ETNA PROJECT, 23/10/2021 by moulin_e
** abc.c
** File description:
**      abc.c
*/

//Déclaration des biliotèques
#include <unistd.h>
#include <stdio.h>


void my_putchar(char c)
{
    write(1, &c, 1);
}
char alpha(char al){
    for (al = 97; al <= 122; al++){
        my_putchar(al);
        //my_putchar('\n');
    }
}

char alpha2(char al){
    int i=0;
    int j=0;
    while (i<=25){
    for (al = 98+i; al <= 'z'; al++){
          my_putchar(al);
    }
    my_putchar('\n');
    i++;}
    /*    for (al = 99; al <= 'z'; al++){
        my_putchar(al);}
    my_putchar('\n');
    for (al = 100; al <= 'z'; al++){
    my_putchar(al);}*/
}




void print_abc_square(int n){
    char al;
    int i=0;
    int j=0;

    //alpha
    

    for (i=1; i <= n; i++){

             alpha(al);
         my_putchar('\n');
         alpha2(al);
        my_putchar('\n');
        /* for (j =98; j<=122; j++ ){
            alpha(j);
            
            
             }*/
        
        // if(al >= 122){
        //  al=al-25;
            // }
        
        }

    /* while (al>= 97 && al<=122){
        al++;
        my_putchar(al);
        }*/
}


int main(){
    char al;
    print_abc_square(3);
    return 0;
}
//Affichage de l'alphabet


