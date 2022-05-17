#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char a;
    do{
    system("cls");
    int byear , curryear=2022;
    
    cout<<"\n\nEnter your birth year = ";
    cin>>byear;
 int age=curryear - byear;
 cout<<"your age is = "<<age<<" Years"<<endl;
 int monthage=age*12;
 cout<<"Months you Lived = "<<monthage<<endl;
 int dayage=age*365;
 cout<<"Days Lived = "<<dayage<<endl;
 int hourage=age*8760;
 cout<<"hours lived = "<<hourage<<endl;
 int minage=age*525600;
 cout<<"Minutes Lived = "<<minage<<endl;
 int secage=age*31536000;
 cout<<"Seconds Lives = "<<secage<<endl;

cout<<"Type Y to do again - ";
cin>>a;


    }while(a=='y');
    getch();
return 0;
}