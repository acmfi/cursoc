#include <stdio.h>
/*
 * Funci�n que modifica un argumento pasado por valor
 */
int no_mod_args (int arg)
{
  /* 
   * Modificamos el valor del argumento
   * (no tendr� efecto fuera de la funci�n)
   */
  arg = 2;
  return 0;
}
int main ()
{
  /* 
   * Declaramos una variable para comprobar que no
   * es modificada al llamar a la funci�n pas�ndola
   * por valor
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
   */
  no_mod_args (var1);
  /* 
   * Imprimimos el valor de la variable despu�s de la
   * llamada a la funci�n
   */
  printf ("Variable var1 = %d\n", var1);
  /* Variable var1 = 1 */

  return 0;
}
