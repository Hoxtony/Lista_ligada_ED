#include "lista.h"

void constroi_lista (s_lidta *l){
    l->primeiro = NULL;
}

int esta_vazia (s_lista *l){
    if (l->primeiro ==NULL)
        return 1;
    else
        return 0;

    // return l->primeiro ==NULL;  "este é um outro modo de fazer"
} 