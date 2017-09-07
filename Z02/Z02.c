#include <stdio.h>
#include <inttypes.h>

void inputValue(int8_t* val) {
	printf("Input value: ");
	scanf_s("%hhi", val);
}

uint8_t sign(int8_t* val) {
	if (*val < 0) {
		return 1;
	}

	if (*val > 0) {
		return 2;
	}

	if (*val == 0) {
		return 3;
	}

}

int main(void) {
	int8_t val = 0;

	inputValue(&val);

	switch (sign(&val)) {
	case 1:
		printf("Value is negative.\n");
		break;

	case 2:
		printf("Value is positive.\n");
		break;

	case 3:
		printf("Value is zero.\n");
		break;
	}

	return 0;
}