#include <stdio.h>

int main() {
	putc('t', stdout);
	putc('e', stdout);
	putc('s', stdout);
	putc('t', stdout);
	putc('e', stdout);
	putc('\n', stdout);

	char c = getc(stdin);
	printf("O caractere digitado foi %c\n", c);
	return 0;
}