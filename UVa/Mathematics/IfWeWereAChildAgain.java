import java.util.Scanner;
import java.math.BigInteger;

class Main/*IfWeWereAChildAgain*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		BigInteger a,b,resultado;
		char operacao;
		while(input.hasNext()){
			a = input.nextBigInteger();
			operacao = input.next().charAt(0);
			b = input.nextBigInteger();
			if(operacao=='%')
				resultado = a.mod(b);
			else
				resultado = a.divide(b);
			System.out.println(resultado);
		}
	}
}
