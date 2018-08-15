import java.util.Scanner;
public class Gravity{

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int[] box = new int [n];
    int temp;

    for (int i = 0; i<n; i++) {
      box[i]=in.nextInt();
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = 0 ; j < n-i-1 ; j++) {
        if (box[j] > box[j+1]) {
          temp = box[j];
          box[j] = box[j+1];
          box[j+1] = temp;
        }
      }
    }

    for (int j=0; j<n; j++) {
      System.out.print(box[j]);
      System.out.print(" ");
    }
  }
}
