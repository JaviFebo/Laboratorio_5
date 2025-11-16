#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

void InsertarInicio (struct Nodo **cabeza, int dato);

void InsertarFinal (struct Nodo **cabeza, int dato);

void InsertarEn (struct Nodo **cabeza, int dato, int posicion);

void EliminarNodo (struct Nodo **cabeza, int dato);

struct Nodo* BuscarNodo (struct Nodo *cabeza, int dato);

void ImprimirLista (struct Nodo *cabeza);

#endif

