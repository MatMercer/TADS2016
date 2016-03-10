#include <stdio.h>
int main() {
	float f [20];
	long l [20];
	char c [20];
	int i [20];

	printf("float: %zu bytes\nlong: %zu bytes\nchar: %zu bytes\nint: %zu bytes\n", sizeof(f), sizeof(l), sizeof(c), sizeof(i));
    return(0);
}