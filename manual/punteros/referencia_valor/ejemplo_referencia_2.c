#include <stdio.h>

/*
 * Función que modifica un argumento pasado por referencia
 */
int mod_args (int * arg)
{
  /* 
   * Modificamos el valor del argumento
   */
  (*arg) = 2;
  
  return 0;
}

int main ()
{
  /* 
   * Declaramos una variable para comprobar que
   * es modificada al llamar a la función pasándola
   * por referencia
   */
  int var1;

  var1 = 1;
  
  /* 
   * Imprimimos el valor de la variable antes de la
   * llamada a la función
   */
  printf ("Variable var1 = %d\n", var1);
  /* Variable var1 = 1 */

  /*
   * Llamada a la función que modifica el argumento
   * pasando como parámetro la dirección de la variable
   */
  mod_args (&var1);
  /* 
   * Imprimimos el valor de la variable después de la
   * llamada a la función
   */
  printf ("Variable var1 = %d\n", var1);
  /* Variable var1 = 2 */

  return 0;
}
