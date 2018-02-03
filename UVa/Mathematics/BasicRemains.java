import java.util.Scanner;
import java.math.BigInteger;

class Main/*BasicRemains*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		while(true){
			int b = input.nextInt();
			if(b==0) break;
			BigInteger a = new BigInteger(input.next(),b);
			BigInteger c = new BigInteger(input.next(),b);
			System.out.println(a.mod(c).toString(b));			
		}
	}
}
