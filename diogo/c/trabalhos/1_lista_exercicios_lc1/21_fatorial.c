#include<stdio.h>
int main(){
int t;
printf("Digite o numero de testes: ");
scanf("%d", &t);
 
	while((t <= 1000) && (t >= 1)){
		int n = 0;
		printf("\nDigite um numero inteiro: ");
		scanf("%d", &n);
		int fatorial = n;
		
		while(n > 2){
		fatorial = fatorial * (n-1);
		n--;
		}
	printf("Fatorial = %d\n", fatorial);
	t--;
	}
} 