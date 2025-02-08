#define ADD(a, b) a + b
#include <stdio.h>

int main(int argc, char** argv) {
	int x = 2;
	int y = 3;

	int z = ADD(x, y);
	printf("%d\n", z);
	return 0;
}
