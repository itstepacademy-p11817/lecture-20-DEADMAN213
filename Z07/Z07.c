#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

void initMas(int64_t* val) {
	for (uint8_t i = 0; i < SIZE; i++) {
		*(val + i) = rand() % 11;
	}
}

void printMas(int64_t* val) {
	for (uint8_t i = 0; i < SIZE; i++) {
		printf("%3lli", *(val + i));
	}
	printf("\n");
}

void swapMas(uint64_t* m) {
	for (uint8_t i = 0; i < SIZE/2; i++) {
		uint8_t box = *(m + i);
		*(m + i) = *(m + SIZE - i - 1);
		*(m + SIZE - i - 1) = box;
	}
}

int main(void) {
	int64_t mas[SIZE] = { 0 };

	srand((unsigned int)time(NULL));
	initMas(mas);

	printf("Massive befor swaping: \n");
	printMas(mas);

	swapMas(mas);

	printf("Massive after swaping: \n");
	printMas(mas);

	return 0;
}