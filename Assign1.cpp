#include <iostream>
using namespace std;

int main(){
  int a;
  float b;
  double c;
  char d;
  cout<<"Hello Captain!"<<endl;
  cout<<"------------------------------------------------------"<<endl;
  cout<<"size of char: "<<sizeof(d)<<" Byte"<<endl;
  cout<<"size of int: "<<sizeof(a)<<" Byte"<<endl;
  cout<<"size of float: "<<sizeof(b)<<" Byte"<<endl;
  cout<<"size of double: "<<sizeof(c)<<" Byte"<<endl;
  cout<<"------------------------------------------------------"<<endl;
  
  double n1=0,n2=0;
  cout<<"Enter the first number: "<<endl;
  cin>>n1;
  cout<<"Enter the Second number: "<<endl;
  cin>>n2;
  cout<<"The product of "<<n1<<" and "<<n2<<" is "<<n1*n2<<"."<<endl;
  
  return 0;
}
 
  
