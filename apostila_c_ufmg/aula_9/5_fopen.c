#include <stdio.h>

int main() {
	FILE *f;
	char c;
	char s[50];

	f = fopen("test.txt", "r+");

	while((c = getc(f)) != EOF) {
		printf("%c", c);
	}

	printf("Insira uma string para ser inserida no arquivo: ");
	gets(s);

	putc('\n', f);

	for(int i = 0; s[i]; i++) {
		putc(s[i], f);
	}

	fclose(f);
	return 0;
}