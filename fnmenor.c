#include<stdio.h>
#include<conio.h>
int fnmenor()
{
    int n1, n2;

    printf( "\n   Introduzca el primer n%cmero (entero): ": );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo n%cmero (entero): ":);
    scanf( "%d", &n2 );

    if ( n1 < n2 )
        printf( "\n   El %d es menor.", n1 );
    else

        if ( n1 > n2 )
            printf( "\n   El %d es menor.", n2 );
        else
            printf( "\n   SON IGUALES" );
 
    getch(); /* Pausa */

    return 0;
}
