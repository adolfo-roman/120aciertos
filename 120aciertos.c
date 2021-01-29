#include <stdio.h>
#include <stdlib.h> //Libreria para funcion system("clear")

// Definimos variable para el numero de facultades en Area 1
# define AREA1 = 10;

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
      while(fnum(menu1) || (menu1 < 1 || menu1 > 3));

      //Segundo menu

      int menu2; //Declaramos variable del segundo menu

      //Este segundo menu sigue la misma logica que el primero

      do
      {
        printf("Selecciona el campus:\n");
        printf("\n");
        printf("1) ESCUELA NACIONAL DE CIENCIAS DE LA TIERRA\n");
        printf("2) ESCUELA NAL. DE ESTUDIOS SUP. UNIDAD JURIQUILLA\n");
        printf("3) ESCUELA NAL. DE ESTUDIOS SUP. UNIDAD MERIDA\n");
        printf("4) FACULTAD DE ARQUITECTURA\n");
        printf("5) FACULTAD DE CIENCIAS\n");
        printf("6) FACULTAD DE INGENIERIA\n");
        printf("7) FACULTAD DE QUIMICA\n");
        printf("8) FES ACATLAN\n");
        printf("9) FES ARAGON\n");
        printf("10) FES CUAUTITLAN\n");
        printf("11) FES ZARAGOZA\n");
        printf("\n");
        printf("Selecciona el numero de la opcion deseada: ");

        scanf("%f", &menu2); // Tiene un bug 0.999... lo evalua a 1

        system("clear"); //Limpia la pantalla

      } while(fnum(menu2) || (menu2 < 1 || menu2 > 11))

      menu2 = menu2 + 3;

      char carreras[30]=
      {
        "ACTUARIA",
        "ARQUITECTURA",
        "ARQUITECTURA DE PAISAJE",
        "CIENCIAS DE LA COMPUTACION",
        "DISEÑO INDUSTRIAL",
        "FISICA",
        "INGENIERIA CIVIL",
        "INGENIERIA DE MINAS Y METALURGIA",
        "INGENIERIA ELECTRICA ELECTRONICA",
        "INGENIERIA EN COMPUTACION",
        "INGENIERIA GEOFISICA",
        "INGENIERIA INDUSTRIAL",
        "INGENIERIA MECANICA",
        "INGENIERIA MECANICA ELECTRICA",
        "INGENIERIA PETROLERA",
        "INGENIERIA QUIMICA",
        "INGENIERIA QUIMICA METALURGICA",
        "INGENIERIA GEOMATICA",
        "MATEMATICAS APLICADAS Y COMPUTACION",
        "MATEMATICAS",
        "URBANISMO",
        "CIENCIAS DE LA TIERRA",
        "ING. EN TELECOMUNICACIONES, SISTEMAS Y ELECTRONICA",
        "GEOCIENCIAS",
        "TECNOLOGIAS PARA LA INFORMACION EN CIENCIAS",
        "CIENCIA DE MATERIALES SUSTENTABLES",
        "FISICA BIOMEDICA",
        "MATEMATICAS APLICADAS",
        "INGENIERIA AMBIENTAL",
        "INGENIERIA AEROESPACIAL"
      }

      switch()
      {

      }



      printf("Works\n");




}
