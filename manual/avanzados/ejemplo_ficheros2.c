#include <stdio.h>


int main (void) {
	FILE *fich_lect;
	FILE *fich_escr;
	char nombre[10], apellido1[10], apellido2[10];
	float nota1,nota2, nota_media;
	
	/* Abrimos los ficheros */
	fich_lect = fopen( "notas.txt", "r" ); /* Lectura */
	fich_escr = fopen( "notas_finales.txt", "w" ); /* Escritura */

	/* Una bonita cabecera */
	fputs( "Notas Finales\n----------\n", fich_escr );
	
	/* Leemos mientras halla datos */
	do {
		fscanf( fich_lect, "%s %s %s %f %f\n", nombre, 
			apellido1, apellido2, &nota1, &nota2 );

		/* Escribimos las notas del alumno */
		fprintf( fich_escr, "Alumno: %s %s, %s\n",
			apellido1, apellido2, nombre );
		fprintf( fich_escr, "Nota primer parcial: %f\n", nota1 );
		fprintf( fich_escr, "Nota segundo parcial: %f\n", nota2 );
		nota_media = (nota1+nota2)/2;
		fprintf( fich_escr, "Nota media: %f\n", nota_media );
		fprintf( fich_escr, "Aprueba?: " );
		if (nota_media >= 5.0)
			fprintf( fich_escr, "SI" );
		else
			fprintf( fich_escr, "NO" );
		fprintf( fich_escr, "\n\n" );
		
	} while (!feof( fich_lect ) );

	fclose( fich_lect );
	fclose( fich_escr );
}

