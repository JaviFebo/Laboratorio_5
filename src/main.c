#include <stdio.h>
#include <stdlib.h>
#include "lista_enlazada.h"

int main (void) {
	struct Nodo* cabeza = NULL;
	
	int valor_a_insertar;
	int valor_a_eliminar;
	int valor_a_buscar;
	int posicion;

	//InsertarInicio
	printf ("===Prueba de función InsertarInicio===\n");
	valor_a_insertar = 10;
	printf ("Insertar 10 al inicio de una lista vacía\n");
	InsertarInicio (&cabeza, valor_a_insertar);
	ImprimirLista (cabeza);

	printf ("Insertar 5 al inicio\n");
	valor_a_insertar = 5;
        InsertarInicio (&cabeza, valor_a_insertar);
        ImprimirLista (cabeza);
	printf ("\n");
	
	//InsertarFinal
	printf ("===Prueba de función InsertarFinal===\n");
	printf ("Se reinicia lista\n");
	EliminarNodo (&cabeza, 5);
	EliminarNodo (&cabeza, 10);
	ImprimirLista (cabeza);

	printf ("Insertar 5 al final de una lista vacía\n");
	valor_a_insertar = 5;
        InsertarFinal (&cabeza, valor_a_insertar);
        ImprimirLista (cabeza);
	
	printf ("Insertar 10 al final\n");
	valor_a_insertar = 10;
	InsertarFinal (&cabeza, valor_a_insertar);
        ImprimirLista (cabeza);
	
	printf ("\n");

	//InsertarEn
	printf ("===Prueba de función InsertarEn===\n");
	printf ("Se reinicia lista\n");
        EliminarNodo (&cabeza, 5);
        EliminarNodo (&cabeza, 10);
	ImprimirLista (cabeza);
	
	printf ("Insertar 1 en la posición 1\n");
	valor_a_insertar = 1;
	posicion = 0;
        InsertarEn (&cabeza, valor_a_insertar, posicion);
        ImprimirLista (cabeza);

	printf ("Insertar 15 en la posición 2\n");
	valor_a_insertar = 15;
        posicion = 1;
        InsertarEn (&cabeza, valor_a_insertar, posicion);
	ImprimirLista (cabeza);

	printf ("Insertar 10 en la posición 2\n");
	valor_a_insertar = 10;
        posicion = 1;
        InsertarEn (&cabeza, valor_a_insertar, posicion);
        ImprimirLista (cabeza);

	printf ("Insertar 5 en la posición 2\n");
	valor_a_insertar = 5;
        posicion = 1;
	InsertarEn (&cabeza, valor_a_insertar, posicion);
        ImprimirLista (cabeza);

	printf ("Insertar 20 en la posición 5\n");
	InsertarEn (&cabeza, 20, 4);
	ImprimirLista (cabeza);

	printf ("Insertar 30 en la posición 10\n");
	valor_a_insertar = 30;
	posicion = 9;
	InsertarEn (&cabeza, valor_a_insertar, posicion);
	ImprimirLista (cabeza);
	printf ("\n");
	
	//EliminarNodo
	printf ("===Prueba de función EliminarNodo===\n");
	ImprimirLista (cabeza);

	valor_a_eliminar = 1;
	printf ("Eliminar 1\n");
	EliminarNodo (&cabeza, valor_a_eliminar);
	ImprimirLista (cabeza);
	
	valor_a_eliminar = 10;
        printf ("Eliminar 10\n");
	EliminarNodo (&cabeza, valor_a_eliminar);
        ImprimirLista (cabeza);

	valor_a_eliminar = 20;
        printf ("Eliminar 20\n");
	EliminarNodo (&cabeza, valor_a_eliminar);
        ImprimirLista (cabeza);

	valor_a_eliminar = 40;
        printf ("Eliminar 40\n");
	EliminarNodo (&cabeza, valor_a_eliminar);
	printf ("\n");
	
	//BuscarNodo
	printf ("===Prueba de función BuscarNodo===\n");
	valor_a_buscar = 15;
	struct Nodo* encontrado = BuscarNodo (cabeza, valor_a_buscar);
	printf ("Buscar 15\n");
	if (encontrado) {
		printf ("Nodo encontrado\n");
	}
	else {
		printf ("Nodo no encontrado\n");
	}

        valor_a_buscar = 40;
        encontrado = BuscarNodo (cabeza, valor_a_buscar);
        printf ("Buscar 40\n");
        if (encontrado) {
                printf ("Nodo encontrado\n");
        }
        else {
                printf ("Nodo no encontrado\n");
        }
	printf ("\n");	

	//Destruir lista
	printf ("===Destruir lista===\n");
	ImprimirLista (cabeza);
	EliminarNodo (&cabeza, 5);
	EliminarNodo (&cabeza, 15);
	ImprimirLista (cabeza);
	return 0;
}
