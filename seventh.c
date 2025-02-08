#include <stdio.h>
#define LOOP_3(x, ...)\
	printf("%s\n", #x);
#define LOOP_2(x, ...)\
	printf("%s\n", #x);\
	LOOP_3(__VA_ARGS__)
#define LOOP_1(x, ...)\
	printf("%s\n", #x);\
	LOOP_2(__VA_ARGS__)
#define LOOP(...)\
	LOOP_1(__VA_ARGS__)

int main(int argc, char** argv) {
	LOOP(copy paste cut)
	LOOP(copy, paste, cut)
	LOOP(copy, paste, cut, select)
	return 0;
}
