#include<iostream>
#include<math.h>
using namespace std;

int main(){
   cout<<"Please enter a,b,c - parameters of quadratic equalation"<<endl;
   double d,x1,x2,a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   d=b*b-(4*a*c);

   if(d==0){
     x1=-b/(2*a);
     cout<<"x1=x2 = "<<x1<<endl;
   }
   if(d>0){
     x1=(-b-sqrt(d))/(2*a);
     x2=(-b+sqrt(d))/(2*a);
     cout<<"x1= "<<x1<<endl;
     cout<<"x2= "<<x2<<endl;
   }
   if(d<0){
    cout<<"D= "<<d<<" => no real roots"<<endl;
   }
   return 0;
}
