import java.util.Scanner;
import java.math.BigInteger;

class Main/*Product*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		BigInteger a,b;
		while(input.hasNext()){
			a = input.nextBigInteger();
			b = input.nextBigInteger();
			a = a.multiply(b);
			System.out.println(a);
		}
	}
}
