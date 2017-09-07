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

void copyMas(uint64_t* m1, uint64_t* m2) {
	for (uint8_t i = 0; i < SIZE; i++) {
		*(m2 + i) = *(m1 + i);
	}
}

int main(void) {
	int64_t mas1[SIZE] = { 0 };
	int64_t mas2[SIZE] = { 0 };

	srand((unsigned int)time(NULL));
	initMas(mas1);

	printf("Massive one: \n");
	printMas(mas1);

	copyMas(mas1, mas2);

	printf("Massive two: \n");
	printMas(mas2);

	return 0;
}