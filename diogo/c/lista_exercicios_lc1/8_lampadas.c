#include <stdio.h>
#include <math.h>

int main() {
	
	int lamps = 0, lampsNeeded = 0;
	float potLamp = 0, potTotal = 0, largura = 0, comprimento = 0, area = 0;

	printf("Digite a potência das lâmpadas: \n");
	scanf("%f", &potLamp);
	printf("Digite a largura em metros do cômodo: \n");
	scanf("%f", &largura);
	printf("Digite o comprimento em metros do cômodo: \n");
	scanf("%f", &comprimento);

	area = largura * comprimento;
	potTotal = 18 * area;
	lamps = (int)potTotal / potLamp;
	lampsNeeded = ceil(lamps); //Arredondar pra cima, para garantir a "iluminação" necessária.

	printf("Serão necessárias %d lâmpadas para iluminar um cômodo de %.2f m²", lampsNeeded, area);
	
	return 0;
}
