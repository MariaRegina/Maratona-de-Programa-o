/*UVa - 424 - Integer Inquiry*/

import java.util.Scanner;
import java.math.BigInteger;

class IntegerInquiry{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		BigInteger sum = BigInteger.valueOf(0);
		while(true){
			BigInteger numero = input.nextBigInteger();
			int a = numero.compareTo(BigInteger.valueOf(0));
			if(a==0) break;
			sum = sum.add(numero);
		}
		System.out.println(sum);
	}
}
