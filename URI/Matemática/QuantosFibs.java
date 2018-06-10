/*
 * URI - 1722 - Quantos Fibs?
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1722
 */

import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

public class /*Main*/QuantosFibs{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		BigInteger a,b,vet[];
		vet = new BigInteger [500];
		vet[1] = BigInteger.ONE;
		vet[2] = BigInteger.valueOf(2);
		for(int i=3;;i++){
			vet[i] = vet[i-1].add(vet[i-2]);
			if(vet[i].compareTo(BigDecimal.valueOf(10e+100).toBigInteger()) == 1) break;
		}
		while(true){
			a = in.nextBigInteger();
			b = in.nextBigInteger();
			if(a.compareTo(BigInteger.valueOf(0)) == 0 && b.compareTo(BigInteger.valueOf(0)) == 0) break;
			int i=1,soma = 0;
			for(;vet[i].compareTo(a) == -1; i++);
			for(;vet[i].compareTo(b) == -1; i++, soma++);
			if(vet[i].compareTo(b) == 0) soma++;
			System.out.println(soma);
		}
	}
}
