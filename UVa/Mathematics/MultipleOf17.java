import java.util.Scanner;
import java.math.BigInteger;

class Main/*MultilpleOf17*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		BigInteger numero,saida,divisor,n,zero;
		zero = BigInteger.valueOf(0);
		while(true){
			n = input.nextBigInteger();
			int a = n.compareTo(zero);
			if(a==0) break;
			numero = n;
			saida = numero.mod(BigInteger.valueOf(17));
			if(saida==BigInteger.ZERO) System.out.printf("1\n");
			else System.out.printf("0\n");
		}
	}
}
