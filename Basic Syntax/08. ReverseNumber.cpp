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
    cout<<"Enter number"<<endl;
    int n;
    double result=0;
    cin>>n;
    result=ReverseNumber(n);
    cout<<result;
return 0;
}
