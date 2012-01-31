int * var1;
int * var2;


int main ( void )
{
  /* Solicitamos memoria para cada puntero */
  var1 = (int *) malloc (sizeof (int));
  var2 = (int *) malloc (sizeof (int));
  
  
  /* Asignamos un valor a cada variable */
  var1 = 3;
  var2 = 4;
  /*
   * ERROR: las variables no son enteros, sino punteros
   *        estamos cambiando la dirección y no el contenido
   */
  
  /* Comparamos las variables */
  if (var1 == var2)
    printf ("Iguales\n");
  else
    printf ("Diferentes\n");
  /*
   * ERROR: en este caso estamos comparando las direcciones
   *        de las variables (punteros) y no su contenido
   */

  /* Liberamos la memoria solicitada */
  free (var1);
  free (var2);

  return 0;
}
