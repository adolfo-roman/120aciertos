#include <stdio.h>
#include <stdlib.h> //Libreria para funcion system("clear")
#include "data.h"

// Definimos variable para el numero de facultades en Area 1
# define AREA1 11

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
      while(fnum(menu1) || (menu1 < 1 || menu1 > 3));

      //Segundo menu

      /*Este segundo menu sigue la misma logica que el primero
      con la diferencia de que en este caso usamos el arreglo
      declarado en el archivo externo, data.h para que
      nos regrese la lista de las facultades existentes a traves
      de un for loop*/

      float menu2; //Declaramos variable del segundo menu

      do
      {
        printf("Selecciona el campus:\n");
        printf("\n");
         for(int i = 0; i < AREA1; i++ )
        {
          printf("%i) %s\n", i+1, facultades[i]);
        }
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%f", &menu2); // Tiene un bug 0.999... lo evalua a 1

        system("clear"); //Limpia la pantalla

      } while(fnum(menu2) || (menu2 < 1 || menu2 > 11));


      switch((int)menu2)
      {
          case(6):

    do
      {
        printf("Selecciona la carrera:\n");
        printf("\n");

        int arr[6] = {0,3,5,19,26,27};

         for(int i = 0; i < 6; i++ )
        {
          printf("%i) %s\n", i+1, carreras[arr[i]]);
        }
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%f", &menu2); // Tiene un bug 0.999... lo evalua a 1

        system("clear"); //Limpia la pantalla

      } while(fnum(menu2) || (menu2 < 1 || menu2 > 11));




      }


      for(int i = 0; i < 30; i++ )
      {
          printf("%s\n", carreras[i]);
      }




      printf("Works\n");




}
