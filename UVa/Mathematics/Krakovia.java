/*UVa - 10925 - Krakovia*/

import java.util.Scanner;
import java.math.BigInteger;

class Main/*Krakovia*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int a,b,caso = 1;
		a = input.nextInt();
		b = input.nextInt();
		while(a!=0||b!=0){
			BigInteger x,y,z,soma = BigInteger.valueOf(0);
			for(int i=0;i<a;i++){
				x = input.nextBigInteger();
				soma = soma.add(x);
			}
			System.out.println("Bill #" + caso++ + " costs " + soma + ": each friend should pay " + soma.divide(BigInteger.valueOf(b)) + "\n");
			a = input.nextInt();
			b = input.nextInt();
		}
	}
}
