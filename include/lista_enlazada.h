#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

/* Insertar un nodo al inicio de la lista
 * 
 * Recibe:
 *  - Un puntero a cabeza
 *  - El dato del nodo a incertar
 *
 *  Hace:
 *  - Se inicializa el nuevo nodo
 *  - Se apunta al inicio de la lista
 *  - Se apunta cabeza al nuevo nodo
 */
void InsertarInicio (struct Nodo **cabeza, int dato);

/* Inserta un nodo al final de la lista
 *
 * Recibe:
 *  - Un puntero a cabeza
 *  - El dato del nodo a incertar
 *
 *  Hace:
 *  - Se inicializa el nodo
 *  - Se apunta a NULL
 *  - Se recorre la lista hasta el último nodo
 *  - Se apunta el último nodo al nuevo nodo
 */
void InsertarFinal (struct Nodo **cabeza, int dato);

/* Inserta un nodo en una posición específica de la lista
 *
 * Recibe:
 * - Un puntero a cabeza
 * - El dato del nodo a incertar
 * - La posición donde se va a incertar
 *
 * Hace:
 * - Se nicializa el nodo
 * - Se apunta el nodo nuevo al nodo en la posición siguiente
 * - Se apunta el nodo en la posición anterior al nodo nuevo
 */
void InsertarEn (struct Nodo **cabeza, int dato, int posicion);

/* Elimina la primera aparición de un dato en la lista
 *
 * Recibe:
 * - Un puntero a cabeza
 * - El dato del nodo a eliminar
 *
 * Hace:
 * - Se busca el nodo con el dato a eliminar
 * - Se apunta el nodo anterior al nodo al que apunta el nodo a eliminar
 * - Se apunta el nodo a eliminar a NULL
 * - Se libera la memoria del nodo a eliminar
 */
void EliminarNodo (struct Nodo **cabeza, int dato);

/* Busca un nodo que contenga un dato en específico
 *
 * Recibe:
 * - El nodo cabeza
 * - El dato del nodo a buscar
 *
 * Hace:
 * - Se recorre la lista hasta que el dato de un nodo coincida con el buscado
 *
 * Retorna:
 * - Un puntero al nodo buscado
 * - Un puntero a NULL si no se encuentra el nodo
 */
struct Nodo* BuscarNodo (struct Nodo *cabeza, int dato);

/* Imprime la lista
 *
 * Recibe:
 * - El nodo cabeza
 *
 * Hace:
 * - Recorre la lista e imprime el dato de cada nodo
 * - Imprime NULL al final para simbolizar el fin de la lista
 */
void ImprimirLista (struct Nodo *cabeza);

#endif

