/*
 * URI - 1279
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1279
 */

import java.util.Scanner;
import java.math.BigInteger;

public class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		BigInteger a,b,c,d,e;
		a = BigInteger.valueOf(4);
		b = BigInteger.valueOf(100);
		c = BigInteger.valueOf(400);
		d = BigInteger.valueOf(15);
		e = BigInteger.valueOf(55);
		boolean aux = false;
		while(in.hasNext()){
			if(aux) System.out.println();
			else aux = true;
			boolean gamb = false, bu = false;
			BigInteger ano = in.nextBigInteger();
			if(ano.mod(a).compareTo(BigInteger.ZERO) == 0){
				if(ano.mod(b).compareTo(BigInteger.ZERO) != 0 || ano.mod(c).compareTo(BigInteger.ZERO) == 0){
					System.out.println("This is leap year.");
					gamb = true;
					if(ano.mod(e).compareTo(BigInteger.ZERO) == 0)
						bu = true;
				}
			}
			if(ano.mod(d).compareTo(BigInteger.ZERO) == 0){
				System.out.println("This is huluculu festival year.");
				gamb = true;
			}
			if(bu){
				System.out.println("This is bulukulu festival year.");
				gamb = true;
			}
			if(gamb == false){
				System.out.println("This is an ordinary year.");
			}
		}
	}
}
