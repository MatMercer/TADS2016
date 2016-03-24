#include <stdio.h>
#include <string.h>
int main() {
	char str1[100],str2[100];
	printf ("Entre com uma string: ");
	gets (str1);
	strcpy (str2,"Voce digitou a string ");
	strcat (str2,str1); /* str2 armazenara' Voce digitou a
						string + o conteudo de str1 */
	printf ("\n\n%s\n",str2);
    return(0);
}