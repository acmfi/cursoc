#include <stdio.h>
/*
 * Función que modifica un argumento pasado por valor
 */
int no_mod_args (int arg)
{
  /* 
   * Modificamos el valor del argumento
   * (no tendrá efecto fuera de la función)
   */
  arg = 2;
  return 0;
}
int main ()
{
  /* 
   * Declaramos una variable para comprobar que no
   * es modificada al llamar a la función pasándola
   * por valor
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
   */
  no_mod_args (var1);
  /* 
   * Imprimimos el valor de la variable después de la
   * llamada a la función
   */
  printf ("Variable var1 = %d\n", var1);
  /* Variable var1 = 1 */

  return 0;
}
