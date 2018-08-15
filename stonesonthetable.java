import java.util.Scanner;

public class Stones{

  public static void main(String args[]){

    int contador = 0;
    int parejas = 0;
    char CharOne, CharTwo;

       Scanner in = new Scanner(System.in);
       System.out.println("Stones:  ");
       int i = in.nextInt();
       System.out.println("Colors:  ");
       String j = in.next();

        while (contador+1 < j.length()) {
            CharOne = j.charAt(contador);
            CharTwo = j.charAt(contador+1);

            if(CharOne == CharTwo){
              parejas++;
            }
           else {
             //Nothing
           }
           contador++;
        }
        System.out.println(parejas);
   }
 }

