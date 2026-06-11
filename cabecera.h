#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM_TABLERO 4

void cargarTablero(int tablero[][TAM_TABLERO]);
void colocarBarco(int tablero[][TAM_TABLERO], int fila, int columna);
void mostrarTablero(int tablero[][TAM_TABLERO]);
void pedirCoordenadas(int *fila, int *columna);
int validarTiro(int tablero[][TAM_TABLERO], int fila, int columna);
int disparar(int tablero[][TAM_TABLERO], int fila, int columna);
int contarImpactos(int tablero[][TAM_TABLERO]);
void jugar(void);

#endif // CABECERA_H_INCLUDED
