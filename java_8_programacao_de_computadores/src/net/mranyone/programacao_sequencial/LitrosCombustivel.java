package net.mranyone.programacao_sequencial;

import java.util.Scanner;

public class LitrosCombustivel {
	private static final int LITROS_HORA = 12;

	public static void main(String[] args) {
		float litros;
		Scanner s = new Scanner(System.in);

		// pega a velocidade e coloca na variavel litros
		System.out.println("Insira a velocidade média: ");
		litros = s.nextFloat();

		// pega a velocidade, a transforma em distancia, e calcula os
		// litros usados
		System.out.println("Insira o tempo percorrido em horas: ");
		litros *= s.nextFloat();
		litros /= LITROS_HORA;

		System.out.println("Litros usados: " + litros + " litros.");

		s.close();
	}

}
