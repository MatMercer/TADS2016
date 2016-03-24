#include <stdio.h>
int main() {
	int mtrx [20][10];
	int i,j,count;
	count=1;
	for (i=0;i<20;i++) {
			for (j=0;j<10;j++) {
				mtrx[i][j]=count;
				count++;
				printf("J: %d\n", j);
			}
		printf("I: %d\n", i);
	}
    return(0);
}