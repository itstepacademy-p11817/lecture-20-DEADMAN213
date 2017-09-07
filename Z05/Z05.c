#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

void initMas(uint64_t* val) {
	for (uint8_t i = 0; i < SIZE; i++) {
		*(val + i) = rand() % 11;
	}
}

void printMas(uint64_t* val) {
	for (uint8_t i = 0; i < SIZE; i++) {
		printf("%3lli", *(val + i));
	}
	printf("\n");
}

uint64_t sumMas(uint64_t* m) {
	uint64_t sum = 0;
	for (uint8_t i = 0; i < SIZE; i++) {
		sum += *(m + i);
	}

	return sum;
}

int main(void) {
	uint64_t mas[SIZE] = { 0 };

	srand((unsigned int)time(NULL));
	initMas(mas);

	printf("Massive: \n");
	printMas(mas);

	printf("Sum of elements: %lli.\n", sumMas(mas));

	return 0;
}