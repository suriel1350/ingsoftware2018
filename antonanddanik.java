import java.util.Scanner;

public class main{

  public static void main(String args[]){

    int contador = 0;
    int juegosD = 0, juegosA = 0;
    char aChar;

       Scanner in = new Scanner(System.in);
       System.out.println("Number of games played:  ");
       int i = in.nextInt();
       System.out.println("Games:  ");
       String j = in.next();

        while (contador < j.length()){
            aChar = j.charAt(contador);

            if(aChar == 'A'){
              juegosA++;
            }
           else if (aChar == 'D'){
             juegosD++;
           }
           else {
             //Nothing
           }
           contador++;
        }
        if(juegosD > juegosA){
           System.out.println("Danik");
         }
       else if (juegosD < juegosA){
           System.out.println("Anton");
         }
       else
           System.out.println("Friendship");

   }
 }


