#include "cabecera.h"

void cargarTablero(int tablero[][TAM_TABLERO])
{
    /* Debe preparar el tablero antes de empezar la partida. */
}

void colocarBarco(int tablero[][TAM_TABLERO], int fila, int columna)
{
    /* Debe ubicar un barco en la posición indicada dentro del tablero. */
}

void mostrarTablero(int tablero[][TAM_TABLERO])
{
    /* Debe imprimir el estado actual del tablero en consola. */
    for(int i = 0; i < TAM_TABLERO; i++)
    {
        for(int j = 0; j < TAM_TABLERO; j++)
        {
            printf("\t%d ", tablero[i][j]);
        }
        printf("\n");

    }
}

void pedirCoordenadas(int *fila, int *columna)
{
    /* Debe pedir al jugador una fila y una columna para disparar. */
}

int validarTiro(int tablero[][TAM_TABLERO], int fila, int columna)
{
    /* Debe verificar que el disparo sea válido y que la casilla no se haya usado. */
    return 0;
}

int disparar(int tablero[][TAM_TABLERO], int fila, int columna)
{
    /* Debe marcar el resultado del disparo como agua o impacto. */
    return 0;
}

int contarImpactos(int tablero[][TAM_TABLERO])
{
    /* Debe contar cuántas partes del barco ya fueron acertadas. */
    return 0;
}

void jugar(void)
{
    /* Debe controlar el flujo completo de la partida. */
}
