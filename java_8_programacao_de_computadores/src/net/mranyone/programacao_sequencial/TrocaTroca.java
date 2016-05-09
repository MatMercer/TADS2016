package net.mranyone.programacao_sequencial;

public class TrocaTroca {

	public static void main(String[] args) {
		int a;
		int b;

		for (int i = -1000, j = 2000; i <= 1000 && j >= 0; i++, j--) {
			a = i;
			b = j;

			a = a + b;
			b = a - b;
			a = a - b;

			System.out.println(a + " | " + b);
		}
	}

}
