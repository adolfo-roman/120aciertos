#include <stdio.h>
#include <stdlib.h> //Libreria para funcion system("clear")
#include "data.h"

// Definimos variable para el numero de facultades en Area 1
# define AREA1 12

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

   system("clear"); //limpia la pantalla para pasar al siguiente menu

    //uso de printf para el banner inicial del programa

    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("*                  120 aciertos                    *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
    printf("\n");
    printf("Bienvenido al proyecto de 120 aciertos\n");
    printf("\n");
    printf("Con este pequeno programa podras saber algunos datos\n");
    printf("sobre el proceso de admision a las carreras de area 1\n");
    printf("en la UNAM.\n");
    printf("          Presiona Enter para continuar             ");

    /* Usamos la funcion while para indicar que siempre y cuando no se presione
      la tecla de salto de linea, osea enter, continue ejecutando el loop*/

        while( getchar() != '\n' );

        system("clear"); //limpia la pantalla para pasar al siguiente menu


     //Primer menu

      /*En este primer menu usamos el arreglo
      declarado en el archivo externo, data.h para que
      nos regrese la lista de las facultades existentes a traves
      de un for loop tomando la informacion desde el arreglo "facultadoes "
      en el documento*/

      float menu1; //Declaramos variable del primer menu

      do
      {
        printf("Selecciona el campus:\n");
        printf("\n");

        //Usamos la directica define para el numero de campus que ofertan el area 1
         for(int i = 0; i < AREA1; i++ )
        {
          printf("%i) %s\n", i+1, facultades[i]);
        }
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%f", &menu1); // Tiene un bug 0.999... lo evalua a 1

        system("clear"); //Limpia la pantalla

      } while(fnum(menu1) || (menu1 < 1 || menu1 > 11));

      int a = menu1-1;

/**
 * Segundo Menu
 *
 * En este menu se usa la variable menu2 para elegir el numero de arreglo
 * correspondiente a la facultad en cuestion como opcion del switch,
 ej: si menu2 = 7 significa que la opcion
 * que se ingreso fue la de la Facultad de Ingenieria.
 *
 * Despues se usa el siguiente switch para otorgar un valor a la variable
 * sub dependiendo de la variable menu2, la variable sub proporciona el
 * numero de elementos dentro de cada subarreglo de "opciones" y cada
 * elemento de estos contiene un numero que servira para imprimir las carreras
 * correspondiente a ese numero dentro del arreglo "carreras" como limite del
 * for loop.
 *
 * Asi, si menu2 = 6, entonces sub = 6; y esto le dira al programa que
 * queremos imprimir del arreglo de "opciones" la que corresponda a la 6ta
 * posicion y esta de acuerdo con sub, tendra 6 elementos, por lo que el
 * for loop solo llevara a cabo 6 iteraciones.
 *
 * Cada uno de estos elementos contiene un numero dependiendo de la facultad
 * que sera el resultado que pasara como argumento del arreglo "carreras"
 * que al mismo tiempo imprimira el numero correspondiente a su arreglo y como
 * resultado final, tendremos el nombre de cada una de las carreras
 * que se imparten en la facultad escogida.
 *
 **/


      int sub;

      switch(a) //realizamos un cast para convertir a int la variable
        {
          case 0:
            sub = 1;
            break;
          case 1:
            sub = 1;
            break;
          case 2:
            sub = 1;
            break;
          case 3:
            sub = 2;
            break;
          case 4:
            sub = 3;
            break;
          case 5:
            sub = 6;
            break;
          case 6:
            sub = 12;
            break;
          case 7:
            sub = 2;
            break;
          case 8:
            sub = 4;
            break;
          case 9:
            sub = 7;
            break;
          case 10:
            sub = 4;
            break;
          case 11:
            sub = 1;
            break;
          }


     float menu2;


      do
      {
        printf("%s\n", facultades[a]);
        printf("Selecciona la carrera:\n");
        printf("\n");

        /*El siguiente for-loop toma las opciones de carrera del arreglo contenido
        en el documento data.h de tal manera que ya la informacion puede ser un poco mas
        dinamica para imprimirse y no tener que escribirla*/

         for(int i = 0; i < sub; i++ )
        {
          printf("%i) %s\n", i+1, carreras[opciones[a][i]]);
        }
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%f", &menu2); // Tiene un bug 0.999... lo evalua a 1

        system("clear"); //Limpia la pantalla

      } while(fnum(menu2) || (menu2 < 1 || menu3 > sub));

      int b = menu2 - 1;

      /*Esta es la parte de los resultados finales del programa, en donde el Programacion
      busca la informacion relacionada con las instrucciones del usuario e imprime a la pantalla
      los elementos requeridos del arreglo en cuestion que es el de data*/

      printf("Facultad: %s\n", facultades[a]);
      printf("\n");
      printf("Carrera: %s\n", carreras[opciones[a][b]]);
      printf("\n");
      printf("Estos son los datos del concurso de Junio 2020\n");
      printf("\n");
      printf("Para esta carrera: \n");
      printf("\n");
      printf("Se ofertaron: %i lugares\n", data[a+1][b][0]);
      printf("Se registraron para examen: %i aspirantes\n", data[a+1][b][1]);
      printf("Presentaron el examen: %i aspirantes\n", data[a+1][b][2]);
      printf("El puntaje minimo fue de: %i aciertos\n", data[a+1][b][3]);
      printf("Resultaron seleccionados: %i aspirantes\n", data[a+1][b][4]);
      printf("\n");

      return 0;

}
