import java.util.Scanner;
import java.lang.Math;
public class StonePaper{
 public static int stonepaper(int num){
    int stn=1,ppr=2,scs=3;
    int c;
    c=(int)(10000*Math.random())%3+1;
    if(num==c){
         System.out.println("Draw!");
        return 2;
    }else if(num==1&&c==2){
         System.out.println("Stone defeated by Paper!\nOpponent won!");
        return 0;
    }else if(num==1&&c==3){
         System.out.println("Scissors defeated by Stone!\nYou won!");
        return 1;
    }else if(num==2&&c==1){
        System.out.println("Paper defeated by Stone!\nYou won!");
        return 1;
    }else if(num==2&&c==3){
         System.out.println("Paper defeated by Scissors!\nOpponent won!");
        return 0;
    }else if(num==3&&c==1){
        System.out.println("Scissors defeated by Stone!\nOpponent won!");
        return 0;
    }else if(num==3&&c==2){
         System.out.println("Paper defeated by Scissors!\nYou won!");
        return 1;
    }else{
         System.out.println("Invalid Process!");
        return 2;
    }
}
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cnt1=0,rndnum=1,cnt2=0;
    System.out.println("Welcome to Stone Paper Scissors :\n");
    while(true){
    int num,flag;
    System.out.println(rndnum + ".Round :");
    System.out.println("Stone (Press 1)");
    System.out.println("Paper (Press 2)");
    System.out.println("Scissors (Press 3)");
    System.out.print("Please enter a process : ");
    num=input.nextInt();
    flag=stonepaper(num);
    if(flag==1){
        cnt1++;
    }else if(flag==0){
        cnt2++;
    }
     System.out.println("You : "+ cnt1 + "\nOpponent : "+ cnt2);
    if(cnt1==5||cnt2==5){
        break;
    }
    rndnum++;
    }
    if(cnt1==5){
        System.out.println("You won! Game Over!");
    }else{
       System.out.println("Opponent won! Game Over!");
    }
    }
}
