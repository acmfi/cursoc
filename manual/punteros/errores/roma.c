int a;
int * ptr;

int main ( void )
{
  /* Solicitamos memoria para ptr */
  ptr = (int *) malloc (sizeof (int));

  /* Asignamos el valor 5 a la posici�n de 
   * memoria apuntada por ptr y 3 al entero a
   */
  (*ptr) = 5;

  a = 3;

  /* Asignamos al puntero ptr la direcci�n
   * de la variable a
   */
  ptr = &a;

  return 0;
}
