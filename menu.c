#include<stdio.h>
#include<conio.h>
 void fnmayor ();
 void fnmenor ();
 void fncuadrado();
 
main()
{
	int valor;
	do{
		printf("\n Seleccione una opcion\n");
		printf("1.-¿Que numero es el mayor?\n");
		printf("2.-¿Que numero es el menor?\n");
		printf("3.-numero al cuadrado\n");
		printf("4.-SALIR\n");
		scanf("\n%d",&valor);
		
		switch(valor){
		
		case 1:
		int mayor;
		 mayor=fnmayor();
		 printf("\nEl numero mayor es:%d",mayor);
		break;
		
		case 2:
		int menor;
		menor=fnmenor();
		printf("\nEl numero menor es:%d",menor);
		break;
		
		case 3:
		int numero
        numero=fncuadrado();
        printf("\nEl cuadrado es:%d",numero);
        break;
        default:
        	printf("\n\n good bye");
		}
	while (valor>=1 && valor<4);
}
	return 0;
}

 void fncuadrado()
{
      int numero,cuadrado;
      {
      printf("Ingrese el valor de la variable:\n");
      scanf("%d",&numero);
      
      cuadrado=pow(numero,2);
      
      printf("El cuadrado %d  es: %d",numero,cuadrado);
      }
  }
  
  void fnmayor()
{
    int n1, n2;

    printf( "\n   Introduzca el primer n%cmero (entero): ");
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo n%cmero (entero): ");
    scanf( "%d", &n2 );

    if ( n1 > n2 )
        printf( "\n   El %d es mayor.", n1 );
    else

        if ( n1 < n2 )
            printf( "\n   El %d es mayor.", n2 );
        else
            printf( "\n   SON IGUALES" );
 
    getch(); /* Pausa */

    return 0;
}

void fnmenor()
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

  
	

                                         
		
		
		
			
			
			
			
			
			
			
			
			
			
