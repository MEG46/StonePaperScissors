#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int stonepaper(int num){
    srand(time(NULL));
    int stn=1,ppr=2,scs=3;
    int c;
    c=rand()%3+1;
    if(num==c){
        printf("Draw!\n");
        return 2;
    }else if(num==1&&c==2){
        printf("Stone defeated by Paper!\nOpponent won!\n");
        return 0;
    }else if(num==1&&c==3){
        printf("Scissors defeated by Stone!\nYou won!\n");
        return 1;
    }else if(num==2&&c==1){
        printf("Paper defeated by Stone!\nYou won!\n");
        return 1;
    }else if(num==2&&c==3){
        printf("Paper defeated by Scissors!\nOpponent won!\n");
        return 0;
    }else if(num==3&&c==1){
        printf("Scissors defeated by Stone!\nOpponent won!\n");
        return 0;
    }else if(num==3&&c==2){
        printf("Paper defeated by Scissors!\nYou won!\n");
        return 1;
    }else{
        printf("Invalid Process!\n");
        return 2;
    }
}
int main(){
    int cnt1=0,rndnum=1,cnt2=0;
    printf("Welcome to Stone Paper Scissors :\n\n");
    while(1){
    int num,flag;
    printf("%d.Round :\n",rndnum);
    printf("Stone (Press 1)\n");
    printf("Paper (Press 2)\n");
    printf("Scissors (Press 3)\n");
    printf("Please enter a process : ");
    scanf("%d",&num);
    flag=stonepaper(num);
    if(flag==1){
        cnt1++;
    }else if(flag==0){
        cnt2++;
    }
    printf("You : %d\nOpponent : %d\n",cnt1,cnt2);
    if(cnt1==5||cnt2==5){
        break;
    }
    rndnum++;
    }
    if(cnt1==5){
        printf("You won! Game Over!\n");
    }else{
        printf("Opponent won! Game Over!\n");
    }
    return 0;
}