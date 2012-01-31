int a;
int * ptr;

int main ( void )
{
  /* Solicitamos memoria para ptr */
  ptr = (int *) malloc (sizeof (int));

  /* Asignamos el valor 5 a la posición de 
   * memoria apuntada por ptr y 3 al entero a
   */
  (*ptr) = 5;

  a = 3;

  /* Asignamos al puntero ptr la dirección
   * de la variable a
   */
  ptr = &a;

  return 0;
}
