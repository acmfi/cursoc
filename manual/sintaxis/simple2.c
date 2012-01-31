#include <stdio.h> /* Directiva del preprocesador */

#define PI 3.1415 /* Directiva del preprocesador */


/* Funcion secundaria */
float areaCirculo ( float radio ) {
	return PI*radio*radio;
}

/* Funcion principal */
int main (void)  /* Cabecera de funcion y lista de argumentos */
{ /* Comienzo de la instrucción compuesta */
	
	float radio;
	float area;
	
	/* Pedimos un numero */
	printf( "Radio? " );
	scanf( "%f", &radio );
	
	if (radio < 0) 
	{
		printf( "No me des un radio negativo!\n" );
	} 
	else 
	{
		/* Obtenemos el area */
		area = areaCirculo( radio );
	
		/* Mostramos el area */
		printf( "Area: %f\n", area );

		return 1; /* Devolvemos 1 */
	}
}
	
