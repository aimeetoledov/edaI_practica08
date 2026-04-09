#ifndef __LISTA_DOBLEMENTE_LIGADA_H__
#define _LISTA_DOBLEMENTE_LIGADA_H__

#include "nodoh."

typedef struct DLista DLista;

struct DLista{
    Nodo* head;
    Nodo* tail;
};

DLista* lista_crear();

bool lista_insertar_vacia(DLista *l, void *info, size_t size);
bool lista_insertar_inicio(DLista *l, void *info, size_t size);
bool lista_insertar_fin(DLista *l, void *info, size_t size);
bool lista_insertar_x_pos(DLista *l, int pos, void *info, size_t size);