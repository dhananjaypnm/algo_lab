#include<iostream>
using namespace std;

//((a mod p)(b mod p)) mod p = (ab) mod p ;

int pow(int a,int b,int c){
  if(b==0) return 1;
  int p=(pow(a,b/2,c)%c)*(pow(a,b/2,c)%c)%c;
  if(b&1) return (p*(a%c))%c;
  else return p;
}

int main(){
  cout<<"enter a b c in a^b%c\n";
  int a,b,c;
  cin>>a>>b>>c;
  cout<<endl<<pow(a,b,c)<<endl;
}
