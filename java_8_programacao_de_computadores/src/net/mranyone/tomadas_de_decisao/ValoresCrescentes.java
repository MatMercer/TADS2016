package net.mranyone.tomadas_de_decisao;

import java.util.Scanner;

public class ValoresCrescentes {

	public static void main(String[] args) {
		int idx = 0;
		Scanner s = new Scanner(System.in);
		System.out.println("Quantos números você quer sortear?");
		
		int v[] = new int[s.nextInt()];
		
		for (int i = 0; i < v.length; i++) {
			System.out.println("Insira um número:");
			v[i] = s.nextInt();
		}
		
		for (int i = 0; i < v.length; i++) {
			idx = i;
			for (int j = i + 1; j < v.length; j++) {
				if (v[idx] > v[j]) {
					idx = j;
				}
			}
			if(v[idx] != v[i]) {
				v[i] += v[idx];
				v[idx] = v[i] - v[idx];
				v[i] -= v[idx];
			}
		}
		
		for (int i = 0; i < v.length; i++) {
			System.out.println(v[i]);
		}
		
		s.close();
		
	}

}
