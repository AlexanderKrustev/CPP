#include<iostream>
#include<limits>
using namespace std;

int main(){
  cout<<"Enter value for N"<<endl;
  int n=0, min, max, temp=0;
  cin>>n;

  min = numeric_limits<int>::max();
  max = numeric_limits<int>::min();
  for(int i=0;i<n;i++){
    cin>>temp;
    if(min>temp){
        min=temp;
    }
    if(max<temp){
        max=temp;
    }
  }
  cout<<"Max="<<max<<endl;
  cout<<"Min="<<min<<endl;
  return 0;
}
