#include<iostream>
using namespace std;


int main(){
 cout<<"N= ";
 int n=0;
 cin>>n;
 unsigned long long factoriel=1;
 for(int i=1;i<=n;i++){
    factoriel*=i;
 }
 cout<<factoriel<<endl;
 int zero=0;
 int countOfZeros=0;
 zero=factoriel%10;
 factoriel/=10;
 while(zero==0)
    {
     cout<<factoriel<<endl;
     countOfZeros++;
     zero=factoriel%10;
     factoriel/=10;
 }
 cout<<countOfZeros<<endl;
}
