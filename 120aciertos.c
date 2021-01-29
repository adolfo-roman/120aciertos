#include <stdio.h>
#include <stdlib.h> //Libreria para funcion system("clear")
#include <ncurses.h>

/*
Bienvenido al codigo fuente del proyecto "120 aciertos".

Este proyecto tiene como objetivo principal el uso de un algoritmo que
prediga los resultados del examen de admision a la UNAM por carrera y como
objetivo secundario pretende organizar toda la informacion de los
resultados del concurso de seleccion para que sea mas facil para
el aspirante o cualquier persona interesada consultarla.

En este programa nos enfocaremos en la segunda parte como parte del
proyecto semestral de Fundamentos de Programacion para intentar aprobar
la asignatura.
*/

int main ()
{

    //uso de printf para el banner inicial del programa

    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("*                  120 aciertos                    *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
    printf("\n");
    printf("          Presiona Enter para continuar             ");


    /* Usamos la funcion while para indicar que siempre y cuando no se presione
    la tecla de salto de linea, osea enter, continue ejecutando el loop*/

    while( getchar() != '\n' );

    system("clear"); //limpia la pantalla para pasar al siguiente menu

    //Primer menu
    int floating(float x)
    {
      int a = x;

      if(a < x || a > x)
      {
        return 1;
      }
      else {
        return 0;
      }
    }

    int menu1; //Declaramos variable para la opcion que desee

    do{

        printf("Que tipo de informacion deseas conocer?\n");
        printf("\n");
        printf("1)Quiero saber el numero de aciertos\n");
        printf("2)Quiero saber alumnos aplicaron\n");
        printf("3)Quiero saber cual es el estimado\n");
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%i", &menu1);

        system("clear");
      }
      while(menu1%10 != 0 || (menu1 < 1 || menu1 > 3) );



      printf("Works\n");




}

#include <stdio.h>
#include <stdlib.h> //Libreria para funcion system("clear")

/*
Bienvenido al codigo fuente del proyecto "120 aciertos".

Este proyecto tiene como objetivo principal el uso de un algoritmo que
prediga los resultados del examen de admision a la UNAM por carrera y como
objetivo secundario pretende organizar toda la informacion de los
resultados del concurso de seleccion para que sea mas facil para
el aspirante o cualquier persona interesada consultarla.

En este programa nos enfocaremos en la segunda parte como parte del
proyecto semestral de Fundamentos de Programacion para intentar aprobar
la asignatura.
*/

//Esta funcion evalua si el numero ingresado es o no un entero
int fnum(float x)
{
  int a = x;
  return a < x ? 1:0;
}

int main ()
{

    //uso de printf para el banner inicial del programa

    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("*                  120 aciertos                    *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
    printf("\n");
    printf("          Presiona Enter para continuar             ");


    /* Usamos la funcion while para indicar que siempre y cuando no se presione
    la tecla de salto de linea, osea enter, continue ejecutando el loop*/

    while( getchar() != '\n' );

    system("clear"); //limpia la pantalla para pasar al siguiente menu
    //Primer menu


    float menu1; //Declaramos variable para la opcion que desee

    do{

        printf("Que tipo de informacion deseas conocer?\n");
        printf("\n");
        printf("1)Quiero saber el numero de aciertos\n");
        printf("2)Quiero saber alumnos aplicaron\n");
        printf("3)Quiero saber cual es el estimado\n");
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%f", &menu1); // Tiene un bug 0.999... lo evalua a 1

        system("clear");
      }
      while(floating(menu1) || (menu1 < 1 || menu1 > 3));



      printf("Works\n");




}

#include<stdio.h>

int main()
{

 float x = 2;
 float z = x;
 float b;
 int y;

 for(int i = 0; i < 1000; i++)
 {
     b = (float)i/1000;
     y = x + b;
     z = x + b;
     printf("y = %i and z = %.3f\n", y, z);
 }

}
