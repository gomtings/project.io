import java.util.Scanner;  
public class Inputtest1 {
	public static void main(String[] args){
		Scanner t = new Scanner(System.in); 
		int x, y;     
		int result;  
		String str;
		System.out.print("첫 번째 숫자를 입력하시오: "); 
		 x = t.nextInt(); 

		System.out.print("두 번째 숫자를 입력하시오: "); 
		 y = t.nextInt(); 
		 
		 result = x+y;
		 System.out.println(x +" + " + y + "=" +result);  
		 
		 result = x/y;  
		 System.out.println(x +" / " + y + "=" +result);  
		 
		 result = x%y;  
		 System.out.println(x +" % " + y + "=" +result);  
		 
		 str=(x%2==0)? "짝수" : "홀수";   //조건 연산자
		 System.out.println(x + " 는 " + str + "입니다");  
	}

}
