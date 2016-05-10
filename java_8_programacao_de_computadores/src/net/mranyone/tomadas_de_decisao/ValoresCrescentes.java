package net.mranyone.tomadas_de_decisao;

import java.util.Scanner;

public class ValoresCrescentes {

	public static void main(String[] args) {
		int vet = 0;
		Scanner s = new Scanner(System.in);
		System.out.println("Quantos números você quer sortear?");
		
		int v[] = new int[s.nextInt()];
		
		
		// for i in v...
		for (int i = 0; i < v.length; i++) {
			System.out.println("Insira um número:");
			v[i] = s.nextInt();
		}
		
		for (int i = 0; i < v.length; i++) {
			vet = v[i];
			for (int j = 1; j < v.length; j++) {
				if (vet > v[j]) {
					v[i] = v[j];
					v[j] = vet;
				}
			}
		}
		
		for (int i = 0; i < v.length; i++) {
			System.out.println(v[i]);
		}
		
		s.close();
		
	}

}
