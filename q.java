import java.util.Random;
 
public class GenerateRandomInRangeMain {
 
    public static void main(String[] args) {
 
        Random randomGenerator=new Random();
        for (int i = 0; i < 6; i++) {
            System.out.println(randomGenerator.nextInt(49) + 1);
        }
 
    }
}
