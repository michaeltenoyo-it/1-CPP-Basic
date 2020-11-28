#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main (){
    int n,acc1,acc2,x1,x2,rand1,rand2;

    cout<<"THE BLACKJACK!"<<endl;
    cout<<"====================="<<endl;
    cout<<"1 to Play or 2 to exit"<<endl;
    cout<<"Input number : ";cin>>n;

    while(n==1){
        x1=1;
        x2=1;
        system("CLS");
        srand(time(NULL));
        acc1 = rand()%10+1;
        acc2 = rand()%10+1;
        cout<<"Player 1's cards : ";
        getch();
        cout<<acc1<<endl;
        cout<<"Player 2's cards : ";
        getch();
        cout<<acc2<<endl;
        cout<<"============================"<<endl;

        while (x1==1 || x2==1){
        system("CLS");
        cout<<"Player 1's cards : "<<acc1<<endl;
        cout<<"Player 2's cards : "<<acc2<<endl;
        cout<<"========================"<<endl;
        if (x1==1){
        cout<<"Player one turn"<<endl;
        cout<<"1 to take or 2 to end turn = ";cin>>x1;
        if (x1==1){
        rand1 = rand()%10+1;
        acc1 = acc1 + rand1;
        cout<<"Player 1 got "<<rand1<<" = "<<acc1<<endl;
        cout<<"---------------"<<endl;
        }else{
        cout<<"---------------"<<endl;
        }
        }else{cout<<"PLAYER 1 STOP"<<endl;}
        if (x2==1){
        cout<<"Player two turn"<<endl;
        cout<<"1 to take or 2 to end turn = ";cin>>x2;
        if (x2==1){
        rand2 = rand()%10+1;
        acc2 = acc2 + rand2;
        cout<<"Player 2 got "<<rand2<<" = "<<acc2<<endl;
        }else{
        cout<<"---------------"<<endl;
        }
        }else{cout<<"PLAYER 2 STOP"<<endl;}
        getch();
        }
        if (acc1>acc2){
            if(acc1>21){
                cout<<"PLAYER 2 WIN!";
            }else{
                cout<<"PLAYER 1 WIN!";
            }
        }else if (acc1<acc2){
            if (acc2>21){
                cout<<"PLAYER 1 WIN!";
            }else{
                cout<<"PLAYER 2 WIN!";
            }
        }else if (acc1>21 && acc2>21){
            cout<<"BOTH PLAYER LOSE!"<<endl;
        }else if (acc1==acc2){
            if (acc1>21 && acc2>21){
                cout<<"BOTH PLAYER LOSE!"<<endl;
            }else{
                cout<<"DRAW!"<<endl;
            }
        }else{}
        getch();
        system("CLS");

        cout<<"THE BLACKJACK!"<<endl;
        cout<<"====================="<<endl;
        cout<<"1 to Play or 2 to exit"<<endl;
        cout<<"Input number : ";cin>>n;
    }

    return 0;
}
