/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dadoviciado;

import java.util.Random;

/**
 *
 * @author Aluno
 */
public class DadoViciado {

   /**
    * @param args the command line arguments
    */
   public static void main(String[] args) {
      Random rand = new Random();
      int[] dices = new int[6];
      int total = 0;
      int percentage;
      
      for(int i = 0; i < 50; i++) {
         dices[rand.nextInt(6)]++;
         total++;
      }
      
      for(int i = 5; i >= 0; i--) {
         System.out.print((i + 1) + ": ");
         percentage = (int)getPercentage(dices[i], total);
         for(int j = 0; j < percentage; j++) {
            System.out.print("*");
         }
         System.out.println("   " + dices[i] + " ocorrencias ou " + percentage  + "%.");
      }
   }
   
   public static float getPercentage(float howMuch, float total) {
      return (howMuch/total) * 100;
   }
   
}
