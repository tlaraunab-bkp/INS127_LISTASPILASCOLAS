#include <stdio.h>
#include "Lista.h"
#include "Nodo.h"

int main(int argc, char **argv)
{
	Lista* lista;
    lista = crearLista();
    
    agregarNodoLista(lista, setDatoNodo(crearNodo(),rand()));
    agregarNodoLista(lista, setDatoNodo(crearNodo(),rand()));
    agregarNodoLista(lista, setDatoNodo(crearNodo(),rand()));
    agregarNodoLista(lista, setDatoNodo(crearNodo(),rand()));
    agregarNodoLista(lista, setDatoNodo(crearNodo(),rand()));
}
