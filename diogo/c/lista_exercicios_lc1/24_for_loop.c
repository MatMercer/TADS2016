#include <stdio.h>
int main() {
	int size;
	int i;
	int j;

	printf("Insira um numero: ");
	scanf("%d", &size);
	if(size < 1) {
		printf("Numero invalido! Abortando...\n");
		return 0;
	}

	//for (i = 0; i < size; ++i) {
	//	for(j = 0; j < -(size - i); ++j) {
	//		printf(" ");
	//	}
	//	for(j = 0; j <= size - i; ++j) {
	//		printf("%d", j);
	//	}
	//	printf("\n");
	//}

//	for (i = 0; i < size; ++i) {
//		for (j = 0; j < i; ++j) {
//			printf(" ");
//		}
//		for (j = size - i; j > 0; --j) {
//			if(j < 10) {
//				printf(" ");
//			}
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//    for(i = 1; i < size; i++) {
//    	for (j = 1; j < i; j++) {
//    		printf(" ");
//    	}
//    	for (j = control + 1; j <= size - control; j++) {
//    		printf("%d", j);
//    	}
//    	control += 1;
//    	printf("\n");
//    }

	for(i = 0; i < size - 1; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = i + 1; j <= size - i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	return(0);
}