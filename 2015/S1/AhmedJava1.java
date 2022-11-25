import java.util.Scanner;

public class AhmedJava1 {
    public static void main(String[] args) {
        Scanner keyScanner = new Scanner(System.in);

        int[] numbers = new int[keyScanner.nextInt()];
        int sum = 0;
        for(int i = 0; i < numbers.length; i++){
            numbers[i] = keyScanner.nextInt();
        }

        for(int j = 0; j < numbers.length; j++){
            int i = 0;
            if(numbers[j] == 0){
                //System.err.println("in if");
                i = 1;
                numbers[j - i] = 0;
                if(numbers[j + 1]  == 0){
                    i += 2;   
                }
                    
            }
        }

        for(int i = 0; i < numbers.length; i++){
            sum += numbers[i];
        }

        System.err.println(sum);
        keyScanner.close();
    }
}
