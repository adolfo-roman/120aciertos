#include <stdio.h>
#include <stdlib.h> //Libreria para funcion system("clear")
#include <Windows.h> //Libreria para funcion Sleep()

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

int i = 1;

do
{
  //system("cls");
  //Sleep(500);
  if(getchar() != '\n'){
    int i = 0;
  } else {
    printf("Presiona Enter para continuar.\n");
  Sleep(500);
  }
}
while( i );

//printf("Presiona Enter para continuar.\n");

/* Usamos la funcion while para indicar que siempre y cuando no se presione
la tecla de salto de linea, osea enter, continue ejecutando el loop*/

//while( getchar() != '\n' );

//system("clear"); //limpia la pantalla para pasar al siguiente menu

printf("works\n");

}
