/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package acertosprova;

import java.util.Random;

/**
 *
 * @author Aluno
 */
public class AcertosProva {

   /**
    * @param args the command line arguments
    */
   public static void main(String[] args) {
      Random rand = new Random();
      int[][] notas = new int[22][30];
      int[] answerKey = new int[30];
      int i = 0;
      int j = 0;
      int acertos = 0;

      for (i = 0; i < answerKey.length; i++) {
         notas[0][i] = rand.nextInt(5);
      }
      
      for (i = 1; i < 21; i++) {
         acertos = 0;
         for (j = 0; j < 30; j++) {
            notas[i][j] = rand.nextInt(5);
            if (notas[i][j] == notas[0][j]) {
               System.out.println("Acerto na questão " + (j + 1) + " do aluno " + (i) + ".\n" + notas[i][j] + " == " + notas[0][j]);
               acertos++;
            }
            else {
               System.out.println("Erro na questão " + (j + 1) + " do aluno " + (i) + ".\n" + notas[i][j] + " != " + notas[0][j] );
            }
         }
         System.out.println("\n##########\nO aluno " + i + " fez " + acertos + " acertos.\n##########\n");
      }

   }
}
