#include <stdio.h>
#include <stdlib.h>
#include "lista_enlazada.h"

void InsertarInicio (struct Nodo **cabeza, int dato) {
	struct Nodo* nodo_nuevo = (struct Nodo*) malloc (sizeof (struct Nodo));
	nodo_nuevo -> dato = dato;
	nodo_nuevo -> siguiente = *cabeza;
	*cabeza = nodo_nuevo;
}

void InsertarFinal (struct Nodo **cabeza, int dato) {
	struct Nodo* nodo_nuevo = (struct Nodo*) malloc (sizeof (struct Nodo));
	nodo_nuevo -> dato = dato;
	nodo_nuevo -> siguiente = NULL;

	if (*cabeza == NULL) {
                *cabeza = nodo_nuevo;
                return;
        }

	struct Nodo *nodo_final = *cabeza;
	while (nodo_final -> siguiente != NULL) {
		nodo_final = nodo_final -> siguiente;
	}

	nodo_final -> siguiente = nodo_nuevo;
}

void InsertarEn (struct Nodo **cabeza, int dato, int posicion) {
	struct Nodo* nodo_nuevo = (struct Nodo*) malloc (sizeof (struct Nodo));
	nodo_nuevo -> dato = dato;
	nodo_nuevo -> siguiente = NULL;
	
	if (posicion == 0) {
		nodo_nuevo -> siguiente = *cabeza;
		*cabeza = nodo_nuevo;
		return;
	}

	struct Nodo *nodo_anterior = *cabeza;
	for (int i = 0; i < posicion - 1; i++) {
		if (nodo_anterior == NULL) {
			printf ("Error posición fuera de los límites de la lista\n");
			free (nodo_nuevo);
			return;
		}
		nodo_anterior = nodo_anterior -> siguiente;
	}
	
	nodo_nuevo -> siguiente = nodo_anterior -> siguiente;
	nodo_anterior -> siguiente = nodo_nuevo;
}

void EliminarNodo (struct Nodo **cabeza, int dato) {
	if (*cabeza == NULL) {
		printf ("Error lista vacía\n");
		return;
	}

	struct Nodo *nodo_a_eliminar = *cabeza;
	while (nodo_a_eliminar != NULL && nodo_a_eliminar -> dato != dato) {
		nodo_a_eliminar = nodo_a_eliminar -> siguiente;
	}
	
	if (nodo_a_eliminar == NULL) {
		printf ("Error dato no contenido en la lista\n");
		return;
	}

        if (nodo_a_eliminar == *cabeza) {
		*cabeza  = nodo_a_eliminar -> siguiente;
		nodo_a_eliminar -> siguiente = NULL;
		free (nodo_a_eliminar);
		return;
	}	

	struct Nodo *nodo_anterior = *cabeza;
	while (nodo_anterior -> siguiente != nodo_a_eliminar) {
                nodo_anterior = nodo_anterior -> siguiente;
        }

	nodo_anterior -> siguiente = nodo_a_eliminar -> siguiente;
	nodo_a_eliminar -> siguiente = NULL;
	free (nodo_a_eliminar);
}

struct Nodo* BuscarNodo (struct Nodo *cabeza, int dato) {
	struct Nodo *nodo_a_buscar = cabeza;
        while (nodo_a_buscar != NULL) {
		if (nodo_a_buscar -> dato == dato) {
			return nodo_a_buscar;
		}
                nodo_a_buscar = nodo_a_buscar -> siguiente;
        }

	return NULL;
}

void ImprimirLista (struct Nodo *cabeza) {
	struct Nodo *nodo_a_imprimir = cabeza;
	while (nodo_a_imprimir != NULL) {
		printf ("%d -> ", nodo_a_imprimir -> dato);
		nodo_a_imprimir = nodo_a_imprimir -> siguiente;
	}
	printf ("NULL\n");
}
