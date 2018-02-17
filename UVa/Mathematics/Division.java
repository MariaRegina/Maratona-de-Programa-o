import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

class /*Main*/Division{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int a,b,m,t,tes;
		BigInteger s,cima,baixo,teste;
		while(in.hasNext()){
			t = in.nextInt();
			a = in.nextInt();
			b = in.nextInt();
			if(b!=0) m = a%b;
			else m = -1;
			System.out.print("(" +t+ "^" +a+ "-1)/(" +t+ "^" +b+ "-1) ");
			if(m==0&&t!=1&&(int)((a-b)*Math.log10(t))<=99&&a!=b){
				cima = BigInteger.valueOf(t).pow(a).add(BigInteger.valueOf(-1));
				baixo = BigInteger.valueOf(t).pow(b).add(BigInteger.valueOf(-1));
				s = cima.divide(baixo);
				if(s.toString().length()<=99)System.out.println(s);
				else System.out.println("is not an integer with less than 100 digits.");
			}else if(a==b&&m==0&&t!=1) System.out.println("1");
			else System.out.println("is not an integer with less than 100 digits.");
		}
	}
}
