#include <stdio.h>
#define SIZE 5

int main(int argc, char** argv) {
	int arr[SIZE] = {9, 22, 30, 23, 18};

	for (int i = 0; i < SIZE; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
