#include <stdio.h>
#include <string.h>
int main() {
	int i;
	char str[100];
	char rts[100];
    printf("Insira uma string:\n");
    gets(str);

    for (i = strlen(str) - 1; i >= 0; --i) {
    	rts[strlen(str) - i - 1] = str[i];
    	printf("%d | %d\n", strlen(str) - i - 1, i);
    }

    printf("%s\n", rts);
    return(0);
}