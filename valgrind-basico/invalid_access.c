#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} t_posicion;

int main() {
	t_posicion* pos = malloc(sizeof(int));
	pos->x = 10;
	pos->y = 5;
	free(pos);
	return 0;
}
