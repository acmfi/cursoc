int main(){

  char **texto;
  int i=0;
  
  /* Se obvia el uso de memoria din�mica. este progama no ejecutar�a, est�
  * puesto para fin did�ctico */
  
  /* Leemos una linea de la entrada est�ndar (m�ximo de caracteres 1024, y
   * la almacenamos en texto[0], es decir, la primera linea */
   
  fgets(texto[0], 1024, stdin);
  
  /* Leemos una segunda linea */
  fgets(texto[1], 1024, stdin);
  
  /* Este bucle imprimir�a la primera linea entera */
  while (texto[0][i] != '\n' && texto[0][i] != '\0')
     printf("%c", texto[0][i++]);
  
  /* Se podr�a reescribir este bucle, siendo equivalente como: */
  while ( *((*texto)+i) != '\n' && *((*texto)+i) != '\0')
     printf("%c", *((*texto)+(i++)));
  
  return 0;
}
