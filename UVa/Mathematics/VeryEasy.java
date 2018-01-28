/*UVa - 10523 - Very Easy !!!*/

import java.util.Scanner;
import java.math.BigInteger;

class Main/*VeryEasy*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		while(input.hasNext()){ // EOF
			int n = input.nextInt();
			int a = input.nextInt();
			BigInteger saida = BigInteger.valueOf(0);
			BigInteger multiplicacao,A,N;
			A = BigInteger.valueOf(a);
			N = BigInteger.valueOf(n);
			for(int i=1;i<=n;i++){
				BigInteger aux = BigInteger.valueOf(i);
				multiplicacao = A.pow(i);
				multiplicacao = multiplicacao.multiply(aux);
				saida = saida.add(multiplicacao);
			}
			System.out.println(saida);
		}
	}
}
