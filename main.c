#include "cabecera.h"

int main()
{
    printf(" **========== BATALLA NAVAL ==========**\n\n");

    int tablero[TAM_TABLERO][TAM_TABLERO] = {0};

    cargarTablero(tablero);
    mostrarTablero(tablero);

    return 0;
}
