#include <stdio.h>
#include <stdlib.h>

int* suma_alloc(int a, int b);
int suma_stack(int a, int b);

int* suma_alloc(int a, int b) {
	int* ret = malloc(sizeof(int));
	*ret = a + b;
	return ret;
}

int suma_stack(int a, int b) {
	return a+b;
}


int main() {
	int a = 5;
	int b = 10;

	// int c = suma_stack(a, b);
	// printf("\n%d\n", c);
	
	int* c = suma_alloc(a, b);
	printf("\n%d\n", *c);

	return 0;
}
