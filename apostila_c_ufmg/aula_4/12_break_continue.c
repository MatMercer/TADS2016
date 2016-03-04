#include <stdio.h>
int main() {
	int size, i;
	size = 1000;
	i = 0;

	while(1) {
		i++;
		if(i & 1) {
			continue;
		}
		printf("%d\n", i);
		if(i == size) {
			break;
		}
	}

    return(0);
}