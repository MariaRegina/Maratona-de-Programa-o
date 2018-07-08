/*
 * UVa - 10007 - Count the Trees
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=948
*/

import java.util.Scanner;
import java.math.BigInteger;

public class Main{
	public static BigInteger c[] = new BigInteger [301];
	public static BigInteger f[] = new BigInteger [301];
	
	public static BigInteger fat(int n){
		if(f[n].compareTo(BigInteger.valueOf(-1)) != 0) return f[n];
		return f[n] = fat(n-1).multiply(BigInteger.valueOf(n));
	}
	
	public static BigInteger cat(int n){
		if(c[n].compareTo(BigInteger.valueOf(-1)) != 0) return c[n];
		BigInteger a, b;
		a = b = BigInteger.ONE;
		for(int i=2;i<=n;i++){
			a = a.multiply(BigInteger.valueOf(n+i));
			b = b.multiply(BigInteger.valueOf(i));
		}
		return c[n] = a.divide(b);
	}
	
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		BigInteger a = BigInteger.valueOf(1), b = BigInteger.valueOf(1);
		for(int i = 0;i <= 300; i++){
			f[i] = c[i] = BigInteger.valueOf(-1);
		}
		f[0] = f[1] = c[0] = c[1] = BigInteger.valueOf(1);
		while(true){
			int n = in.nextInt();
			if(n == 0) break;
			System.out.println(fat(n).multiply(cat(n)));
		}
	}
}
