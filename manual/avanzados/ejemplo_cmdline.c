#include <stdio.h>


int main (int argc, char **argv) {
	int i;
	
	if (argc == 1){
		/* Si no nos han llamado con argumentos salimos
		 * dando un mensaje de error
		 */
		printf( "Error: N�mero insuficiente de argumentos\n" );
		printf( "Uso: %s argumentos\n", argv[0] );
		
		return 1; /* Devolvemos c�digo de error 1 */
	}
			
	for (i=1; i < argc; i++) {
		printf( "Argumento n�mero %d: %s\n", i, argv[i] );

		/* Si nos dan la opcion --saluda, entonces saludamos */
		if (strcmp( argv[i], "--saluda" )==0) {
			printf( "Hola!\n" );
		}

	}

	return 0;
}
