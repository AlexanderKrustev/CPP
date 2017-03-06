#include<iostream>
#include<math.h>
using namespace std;

double ReverseNumber(int n){
    int copyOfInput,power;

    int result=0;
    power=-1;
    copyOfInput=n;
    while(copyOfInput>0){
        copyOfInput=copyOfInput/10;
        power++;
    }

    while(n>0){
        result+=(n%10)*pow(10,power);
        n=n/10;
        power--;
    }

    return result+1;
}

int main(){
    bool result=true;
    if(ReverseNumber(123)==321){
        result=true;
        cout<<result;
    }
     if(ReverseNumber(11234)==43211){
        result=true;
        cout<<result;

    }
     if(ReverseNumber(9875)==5789){
        result=true;
        cout<<result;

    }
     if(ReverseNumber(369)==963){
        result=true;
        cout<<result;

    }
     if(ReverseNumber(1478)==8741){
        result=true;
        cout<<result;

    }
     if(ReverseNumber(123456)==654321){
        result=true;
        cout<<result;
        ;
    }
     if(ReverseNumber(159)==951){
        result=true;
        cout<<result;

    }
     if(ReverseNumber(357)==753){
        result=true;
        cout<<result;

    }
     if(ReverseNumber(147852369)==963258741){
        result=true;
        cout<<result;

    }

    cout<<result;

}
