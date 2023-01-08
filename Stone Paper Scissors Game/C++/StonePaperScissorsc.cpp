#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int stonepaper(int num){
    srand(time(NULL));
    int stn=1,ppr=2,scs=3;
    int c;
    c=rand()%3+1;
    if(num==c){
        cout << "Draw!" << endl;
        return 2;
    }else if(num==1&&c==2){
        cout << "Stone defeated by Paper!" << endl << "Opponent won!" << endl;
        return 0;
    }else if(num==1&&c==3){
        cout << "Scissors defeated by Stone!" << endl << "You won!" << endl;
        return 1;
    }else if(num==2&&c==1){
       cout << "Paper defeated by Stone!" << endl << "You won!" << endl;
        return 1;
    }else if(num==2&&c==3){
        cout << "Paper defeated by Scissors!" << endl << "Opponent won!" << endl;
        return 0;
    }else if(num==3&&c==1){
        cout << "Scissors defeated by Stone!" << endl << "Opponent won!" << endl;
        return 0;
    }else if(num==3&&c==2){
        cout << "Paper defeated by Scissors!" << endl << "You won!" << endl;
        return 1;
    }else{
        cout << "Invalid Process!" << endl;
        return 2;
    }
}
int main(){
    int cnt1=0,rndnum=1,cnt2=0;
    cout << "Welcome to Stone Paper Scissors :" << endl << endl;
    while(1){
    int num,flag;
    cout << rndnum << ".Round :" << endl;
    cout << "Stone (Press 1)" << endl;
    cout << "Paper (Press 2)" << endl;
    cout << "Scissors (Press 3)" << endl;
    cout << "Please enter a process : ";
    cin >> num;
    flag=stonepaper(num);
    if(flag==1){
        cnt1++;
    }else if(flag==0){
        cnt2++;
    }
    cout << "You : "<< cnt1 << endl << "Opponent : "<< cnt2 << endl ;
    if(cnt1==5||cnt2==5){
        break;
    }
    rndnum++;
    }
    if(cnt1==5){
        cout << "You won! Game Over!" << endl;
    }else{
        cout << "Opponent won! Game Over!" << endl;
    }
    return 0;
}