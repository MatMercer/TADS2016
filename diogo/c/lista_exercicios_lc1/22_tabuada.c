#include <stdio.h>

int main(){
	int i = 0, j = 0;

	for(i = 1; i <= 10; i++){
		for(j = 1; j <= 10; j++){
			int mult = (i * j);
			printf("\t%d", mult);
		}
		printf("\n");
	}
	return 0;
}