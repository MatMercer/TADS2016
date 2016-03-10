# include <stdio.h>
int main() {
	int t, i, M[3][4];
	for (t=0; t<3; ++t)
		for (i=0; i<4; ++i)
			M[t][i] = (t*4)+i+1; //1: M[0][0] = 0 + 1 2: M[0][1] = 0 + 2 
		for (t=0; t<3; ++t) {
			for (i=0; i<4; ++i)
				printf ("%3d ", M[t][i]); //1: 1 2 2: 5  
				printf ("\n");
			}
	return(0);
}
