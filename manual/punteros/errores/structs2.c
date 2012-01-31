/* Definimos una estructura de ejemplo */
struct estructura {
  char caracter;
  int  entero;
};

/* Definimos una variable que apunte a dicha estructura */
struct estructura * s_ptr;

int main ( void )
{

  /* Declaramos una variable que apunte a dicha estructura */
  struct estructura * s_ptr;

  /* Solicitamos memoria para dicha variable */
  s_ptr = (struct estructura *) malloc (sizeof (struct estructura));

  /* Rellenamos los campos */
  (*s_ptr).caracter = 'A';
  (*s_ptr).entero   = 2345;
  
  /* Rellenamos los campos (más elegante)*/
  s_ptr -> caracter = 'A';
  s_ptr -> entero   = 2345;
  
  /* Liberamos la memoria solicitada */
  free (s_ptr);
  
  return 0;
}

