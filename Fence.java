import java.util.Scanner;
public class Fence{

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int h = in.nextInt();
    int width=0;

    int[] heightArr = new int [n];

    for (int i =0; i<n; i++) {
      heightArr[i]=in.nextInt();
      if (heightArr[i] > h)
        width+=2;
      else
        width++;
    }

    System.out.println(width);
  }
}
