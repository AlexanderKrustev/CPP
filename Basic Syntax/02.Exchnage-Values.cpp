#include<iostream>
using namespace std;

int main(){
   cout<<"Enter 3 numbers"<<endl;
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   int numberOfNegative=0;
   if(a<0){
    numberOfNegative++;
   }
   if(b<0){
        numberOfNegative++;

   }
   if(c<0){
     numberOfNegative++;

   }

   if(numberOfNegative%2!=0){
     cout<<"Sign -"<<endl;
   }
   else{
      cout<<"Sign +"<<endl;
   }

   return 0;
}
