#include <stdio.h>
#define PRINT(a) printf(a"%d\n", a);
#define LOOP(v, s, e) for (int v = s; v <= e; v++) {
#define ENDLOOP }
int main(int argc, char** argv) {
	LOOP(counter, 1, 10)
	PRINT(counter)
	ENDLOOP
	return 0;
}
