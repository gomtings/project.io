import java.util.*;
public class arr02 {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		int ran,ran2;
		String [] Clubs = new String[] { "Clubs", "Diamonds", "Hearts", "Spades" };
		String[] Jack = new String[]{ "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
		System.out.print("�ݺ�Ƚ��");
		int sum = key.nextInt();
		for(int i=0;i<sum;i++){
		 ran = (int)(Math.random()*2+1);
		 ran2 = (int)(Math.random()*12+1);
		 System.out.println();
		 System.out.print(Clubs[ran]+"��"+Jack[ran2]+")");
		}
	}
}