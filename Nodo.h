#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* sig;
} Nodo;

Nodo* crearNodo(){
    Nodo* aux;
    aux = (Nodo *) malloc(size(Nodo));
    aux->dato = 0;
    
    return aux;
}

int getDatoNodo(Nodo* n){
    return n->dato;
}

Nodo* setDatoNodo(Nodo* n, int dato){
    n->dato = dato;
    return n;
}

void setSiguienteNodo(Nodo* n, Nodo* sig){
    n->sig = sig;
}