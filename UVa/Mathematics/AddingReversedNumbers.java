/*UVa - 713 - Adding Reversed Numbers*/

import java.util.Scanner;
import java.math.BigInteger;

class Main/*AddingReversedNumbers*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		BigInteger a,b;
		while(n-- > 0){
			a = input.nextBigInteger();
			b = input.nextBigInteger();
			String string_a = new StringBuffer(a.toString()).reverse().toString(); // de BigInteger para String
			String string_b = new StringBuffer(b.toString()).reverse().toString(); // de BigInteger para String
			BigInteger total,reverso_a,reverso_b;
			reverso_a = new BigInteger(string_a); // de String para BigInteger
			reverso_b = new BigInteger(string_b); // de String para BigInteger
			reverso_a = reverso_a.add(reverso_b);
			String soma = new StringBuffer(reverso_a.toString()).reverse().toString();
			total = new BigInteger(soma);
			System.out.println(total);
		}
	} 
}
