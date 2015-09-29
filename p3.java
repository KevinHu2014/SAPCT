import java.io.FileReader;
import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;

public class p3 {
	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		FileReader fr =new FileReader("p3.in");
		Scanner sc = new Scanner(fr);
		int n = sc.nextInt();
		while(n-->0){
			BigInteger p = sc.nextBigInteger();
			String ignore= sc.next();
			BigInteger q = sc.nextBigInteger();
			BigInteger gcd_pq=p.gcd(q);
			System.out.printf(p.divide(gcd_pq)+" / "+q.divide(gcd_pq)+"\n");
			
			
		}
		sc.close();
		fr.close();
	}

}
