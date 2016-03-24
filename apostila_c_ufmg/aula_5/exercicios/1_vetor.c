#include <stdio.h>
int main() {
	int size = 100;
	int num[size];
	int count=0;
	int totalnums;
	do {
		printf ("\nEntre com um numero (-999 p/ terminar): ");
		scanf ("%d",&num[count]);
		count++;
	} while (num[count-1]!=-999 && count < size);
	
	totalnums=count;
	printf ("\n\n\n\t Os números que você digitou foram:\n\n");

	for (count=0;count<totalnums;count++)
		printf (" %d",num[count]);

	printf("\n");
    return(0);
}