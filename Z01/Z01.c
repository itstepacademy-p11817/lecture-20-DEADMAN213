#include <stdio.h>
#include <inttypes.h>

void inputValue(uint8_t* val) {
	printf("Input value: ");
	scanf_s("%hhi", val);
}

uint8_t maxTwo(uint8_t* n1, uint8_t* n2) {
	if (*n1 > *n2) {
		return 1;
	}

	if (*n1 < *n2) {
		return 2;
	}

	if (*n1 == *n2) {
		return 3;
	}
}

int main(void) {
	uint8_t num1 = 0;
	uint8_t num2 = 0;

	inputValue(&num1);
	inputValue(&num2);

	switch (maxTwo(&num1, &num2)) {
	case 1:
		printf("%2hhi bigger then %2hhi.\n", num1, num2);
		break;

	case 2:
		printf("%2hhi less then %2hhi.\n", num1, num2);
		break;

	case 3:
		printf("%2hhi equals %2hhi.\n", num1, num2);
		break;
	}

	return 0;
}