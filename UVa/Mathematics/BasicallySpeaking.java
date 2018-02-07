import java.util.Scanner;
import java.math.BigInteger;

class Main/*BasicallySpeaking*/{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		while(input.hasNext()){
			String a = input.next();
			int b = input.nextInt();
			BigInteger vai = new BigInteger(a,b);
			int c = input.nextInt();
			String saida = vai.toString(c);
			int tamanho = saida.length();
			saida = saida.toUpperCase();
			if(tamanho>7) System.out.println("  ERROR");
			else{
				for(int i=0;i<7-tamanho;i++) System.out.print(" ");
				System.out.println(saida);
			}
		}
	}
}
