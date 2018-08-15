import java.util.Scanner;

class PoliceRecruits
{

    public static void main(String[] args)
    {
        //Declaramos un scanner para capturar la entrada
        Scanner myinput = new Scanner(System.in);

        // variable para guardar los casos en la enrrada por teclado
        int casos = myinput.nextInt();

        int entrada = 0;
        int sum = 0;
        int neg = 0;

        for(int i = 0; i < casos; i++)
        {
            //Capturamos la segunda entrada
            entrada = myinput.nextInt();

            if (entrada > 0)
                sum+=entrada;
            else if(entrada < 0)
                  if(sum > 0)
                    sum--;
                  else
                    neg++;
        }
        System.out.println(neg);
    }
}
