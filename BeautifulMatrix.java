import java.util.Scanner;

class BeautifulMatrix
{
  public static void main(String[] args)
  {
      //Declaramos un scanner para capturar la entrada
      Scanner myinput = new Scanner(System.in);

      int i = 1;  // Variable para las filas
      int j = 1;  // Variable para las columnas

      for (i = 1; i <= 5; i++) {
        if (myinput.nextInt() == 1) {
          break;
        }

        //Aqui vamos a incrementar  
        if (i == 5) {
          j++;
          i = 0;
        }
      }

      System.out.println(Math.abs(i-3)+Math.abs(j-3));
  }
}
