#include<iostream>
using namespace std;

int main(){
  cout<<"Enter two positive numbers"<<endl;
  int a,b,gcd=0;
  cin>>a;
  cin>>b;
  if(a<0 || b<0){
    cout<<"Incorrect input"<<endl;
    return 0;
  }
    gcd = a % b;
    while(gcd!=0)
    {

        a=b;
        b=gcd;
        gcd = a % b;
    }

    cout<<"gcd = "<<b<<endl;

  return 0;
}
