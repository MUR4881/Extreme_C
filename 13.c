#include <stdio.h>
#define SIZE 5

int main(int argc, char **argv) {
	int arr[5] = {9, 22, 30, 23, 18};

	int *ptr = arr;

	for (;;) {
		printf("%d\n", *(ptr++));
		if (ptr == arr + SIZE)
			break;
	}
	return 0;
}
