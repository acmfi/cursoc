#include <stdio.h>


int main (void) {
	FILE *fich;
	char nombre[10], apellido1[10], apellido2[10];
	float nota1,nota2;
	
	/* Abrimos el fichero */
	fich = fopen( "notas.txt", "r" );


	/* Leemos mientras halla datos */
	do {
		fscanf( fich, "%s %s %s %f %f\n", nombre, 
				apellido1, apellido2, &nota1, &nota2 );
		printf( "Alumno: %s %s %s. Notas: %f %f\n", nombre, 
				apellido1, apellido2, nota1, nota2 );
	
	} while (!feof( fich ) );

	fclose( fich );
}

