#include <stdlib.h>
#include <stdio.h>

void causar_segfault(int* a, int b);
void correr_rutina();

void causar_segfault(int* a, int b) {
	*a = b * 10;
}

void correr_rutina() {
	int* a;
	causar_segfault(a, 50);
}

int main() {
	correr_rutina();
	return 0;
}
