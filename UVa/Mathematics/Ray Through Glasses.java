/*
 * UVa - 10334 - Ray Through Glasses
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1275
*/

import java.util.Scanner;
import java.math.BigInteger;

public class Main{
	public static BigInteger v[] = new BigInteger [1001];
	
	public static BigInteger fib(int n){
		if(v[n].compareTo(BigInteger.valueOf(-1)) != 0) return v[n];
		return v[n] = fib(n-1).add(fib(n-2));
	}
	
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n;
		for(int i=0;i <= 1000; i++){
			v[i] = BigInteger.valueOf(-1);
		}
		v[0] = BigInteger.ONE;
		v[1] = BigInteger.valueOf(2);
		while(in.hasNextInt()){
			n = in.nextInt();
			System.out.println(fib(n));
		}
	}
}
