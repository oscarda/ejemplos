#include <stdio.h>

int main (void)
{
	int tabla[5][6];		/* Array bidimensional. */
	int alumno;				/* Para recorrer los alumnos (columnas). */
	int nota;				/* Para recorrer las tres notas (filas). */
	int suma;				/* Para la suma de las tres notas. */
	int media_mayor;		/* Almacena la media mayor. */
	int mejor_exp;			/* Almacena el expediente con mayor media. */

	/* Almacenamos en el array el numero de expediente y
	las tres notas de cada alumno. */
	for (alumno=0; alumno<=5; alumno++)
	{
		/* Pedimos el numero de expediente,
		que se almacena en la fila 0. */
		printf ("\nEscriba el numero de expediente: ");
		scanf("%d", &tabla[0][alumno]);

		/* Pedimos las tres notas, que se almacenan
		en las filas 1, 2 y 3. */
		for (nota=1; nota<=3; nota++)
		{
			printf ("\nEscriba la nota %d: ", nota);
			scanf ("%d", &tabla[nota][alumno]);
		}
	}

	/* Calculamos la nota media de cada alumno. */
	for (alumno=0; alumno<=5; alumno++)
	{
		/* Obtenemos la suma de las tres notas. */
		suma=0;
		for (nota=1; nota<=3; nota++)
		{
			suma = suma + tabla[nota][alumno];
		}
		/* Almacenamos en la celda correspondiente la
		media de las tres notas. */
		tabla[4][alumno] = suma / 3;
	}

	/* Calculamos la nota media mayor y obtenemos dicha nota.
	Partimos de la idea de que la mayor nota es 0. */
	media_mayor=0;
	for (alumno=0; alumno<=5; alumno++)
	{
		/* Si estamos ante una nota mayor que la almacenada
		en media_mayor, entonces esta nueva nota pasa a
		ser la media mayor y almacenamos el numero de
		expediente de ese alumno. */
		if (tabla[4][alumno] > media_mayor)
		{
			media_mayor = tabla[4][alumno];
			mejor_exp = tabla[0][alumno];
		}
	}

	/* Mostramos en la pantalla unos mensajes que indican el numero
	de expediente del alumno con la nota media mayor y dicha nota. */
	printf ("\n\nLa mejor media:");
	printf ("\n\tExpediente: %d", mejor_exp);
	printf ("\n\tNota Media: %d\n", media_mayor);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
