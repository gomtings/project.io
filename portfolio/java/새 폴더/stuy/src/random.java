import java.util.Scanner;
public class random {
	public static void main(String[] args){
		Scanner cc=new Scanner(System.in);
		int a=(int)(Math.random()*100+1);
		while(true){
			System.out.print("정수입력");
			int x=cc.nextInt();
			if(x<a){
				System.out.println("난수값보다 작습니다.");
			}
			else if(x>a){
				System.out.println("난수값보다 큰값 입니다.");
			}
			else if(x==a){
				System.out.print("난수값을 맞췃습니다.");
				break;
			}
		}
	}
}