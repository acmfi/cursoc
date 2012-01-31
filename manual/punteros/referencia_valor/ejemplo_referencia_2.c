#include <stdio.h>

/*
 * Funci�n que modifica un argumento pasado por referencia
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
   * es modificada al llamar a la funci�n pas�ndola
   * por referencia
   */
  int var1;

  var1 = 1;
  
  /* 
   * Imprimimos el valor de la variable antes de la
   * llamada a la funci�n
   */
  printf ("Variable var1 = %d\n", var1);
  /* Variable var1 = 1 */

  /*
   * Llamada a la funci�n que modifica el argumento
   * pasando como par�metro la direcci�n de la variable
   */
  mod_args (&var1);
  /* 
   * Imprimimos el valor de la variable despu�s de la
   * llamada a la funci�n
   */
  printf ("Variable var1 = %d\n", var1);
  /* Variable var1 = 2 */

  return 0;
}
