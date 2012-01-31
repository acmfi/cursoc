/* Definimos una estructura de ejemplo */
struct estructura {
  char caracter;
  int  entero;
};

int main ( void )
{
  /* Declaramos una variable que apunte a dicha estructura */
  struct estructura * s_ptr;

  /* Solicitamos memoria para dicha variable */
  s_ptr = (struct estructura *) malloc (sizeof (struct estructura));

  /* Rellenamos los campos */
  s_ptr.caracter = 'A';
  s_ptr.entero   = 2345;
  /*
   * ERROR: estamos intentando acceder a los campos caracter
   *        y entero de un puntero, el compilador dará un error
   */  

  /* Liberamos la memoria solicitada */
  free (s_ptr);

  return 0;
}

