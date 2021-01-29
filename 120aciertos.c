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

    int opcion1 = 0;

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

    //Segundo menu

    printf("Que tipo de informacion deseas conocer?\n");
    printf("\n");
    printf("1)Quiero saber el numero de aciertos\n");
    printf("2)Quiero saber alumnos aplicaron\n");
    printf("3)Quiero saber cual es el estimado\n");
    printf("\n");
    printf("Selecciona el numero de la opcion deseada: ");

    scanf("%i", &opcion1);





}
