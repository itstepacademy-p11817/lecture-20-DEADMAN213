#include <stdio.h>
#include <inttypes.h>

void inputValue(uint8_t* val) {
	printf("Input value: ");
	scanf_s("%hhi", val);
}

void swap(int8_t* val1, int8_t* val2) {
	int8_t box = *val1;
	*val1 = *val2;
	*val2 = box;
}

int main(void) {
	int8_t val1 = 0;
	int8_t val2 = 0;

	inputValue(&val1);
	inputValue(&val2);

	printf("Value one befor swaping: %hhi.\n", val1);
	printf("Value two befor swaping: %hhi.\n", val2);

	swap(&val1, &val2);

	printf("Value one after swaping: %hhi.\n", val1);
	printf("Value two after swaping: %hhi.\n", val2);

	return 0;
}