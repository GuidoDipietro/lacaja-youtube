#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} t_posicion;

t_posicion* cargar_posicion(int* x, int* y);
void correr_rutina();

t_posicion* cargar_posicion(int* x, int* y) {
	t_posicion* ret = malloc(sizeof(short));
	ret->x = *x;
	ret->y = *y;
	return ret;
}

void correr_rutina() {
	int* a = malloc(sizeof(int));
	int* b = malloc(sizeof(int));
	t_posicion* pos = cargar_posicion(a, b);
	free(b);
	return;
}

int main() {
	correr_rutina();
	return 0;
}
