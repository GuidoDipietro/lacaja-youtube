#include <stdio.h>
#include <stdlib.h>

int* suma_alloc(int a, int b);

int* suma_alloc(int a, int b) {
	int* ret = malloc(sizeof(int));
	*ret = a + b;
	return ret;
}

int* d;

int main() {
	int a = 5;
	int b = 10;
	d = suma_alloc(a, b);

	return 0;
}
