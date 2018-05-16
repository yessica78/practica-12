#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
	float a, b;
	char enter,pausa;
	float cuadrado(int);
	int mayor(int, int);
	int menor(int, int);
	textcolor();	
	void main()
	{
	textbackground(BLUE); 
	textcolor(YELLOW);
        clrscr();
        gotoxy(30,.2);        
		printf(" Práctica #12 ");
        gotoxy(3,.4);         
		printf(" Ejemplos de varias funciones programadas y de biblioteca");
        gotoxy(10,.6);         
		printf(" Teclee un número: ");
        scanf ("% f,%c",&a,&enter);
        gotoxy(10,.7);           
		printf(" Teclee otro número: ");
        scanf ("% f,%c",&b,&enter);
  
         printf(" \n\n El cuadrado de : %f es: %12.4f", a, cuadrado (a));
         printf(" \n\n El mayor de los dos números es el: %d", mayor (a,b));
         printf(" \n\n El menor de los dos números es el: %d", menor (a,b));
         printf(" \n\n Presione <ENTER> para continuar...");
         scanf ("%c",&pausa);
         textbackground(BLUE); 
		textcolor(WHITE);
         getch();
         }
               float cuadrado (int a)
               {
                    return (a*a);
               }

               int mayor(x,y)
               {
                if (x>y)
                return (x);
                 else  
                if(y >x)
                 return (y);
                else
                return (0);
                }
               int menor(xx, yy)
               {
                   if (xx<yy)
                   return (xx);
                      else  
                   if(yy<xx)
                   return (yy);
                      else
                   return (0);
                }

