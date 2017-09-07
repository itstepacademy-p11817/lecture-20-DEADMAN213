#include <stdio.h>
#include <inttypes.h>

void inputValue(uint64_t* val) {
	printf("Input value: ");
	scanf_s("%lli", val);
}

int64_t sum(uint64_t *val1, uint64_t *val2) {
	return *val1 + *val2;
}

int64_t sub(uint64_t *val1, uint64_t *val2) {
	return *val1 - *val2;
}

int64_t mul(uint64_t *val1, uint64_t *val2) {
	return *val1 * *val2;
}

int64_t div(uint64_t *val1, uint64_t *val2) {
	return *val1 / *val2;
}


int main(void) {
	int64_t val1 = 0;
	int64_t val2 = 0;

	inputValue(&val1);
	inputValue(&val2);

	uint8_t ch = 0;
	printf("+ - for sum.\n");
	printf("- - for subtraction.\n");
	printf("/ - for division.\n");
	printf("* - for multiplication.\n");
	printf("Input operation: ");
	scanf_s("%c", &ch);
	scanf_s("%c", &ch);
	//ch = getchar();

	switch (ch) {
	case '+':
		printf("%lli + %lli = %lli.\n", val1, val2, sum(&val1, &val2));
		break;

	case '-':
		printf("%lli - %lli = %lli.\n", val1, val2, sub(&val1, &val2));
		break;

	case '/':
		printf("%lli / %lli = %lli.\n", val1, val2, div(&val1, &val2));
		break;

	case '*':
		printf("%lli * %lli = %lli.\n", val1, val2, mul(&val1, &val2));
		break;

	default:
		printf("Wrong input.\n");
		break;
	}

	return 0;
}