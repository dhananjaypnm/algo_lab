#include<iostream>
using namespace std;

int gcdExtended(int a,int b,int *x,int *y){
  if(a==0) {
    *x=0;
    *y=1;
    return b;
  }
  int x1,y1;
  int gcd=gcdExtended(b%a,a,&x1,&y1);
  *x=y1-(b/a)*x1;
  *y=x1;
  return gcd;
}

int main(){
  cout<<"enter a and b :"<<endl;
  int a,b,x,y,g;
  cin>>a>>b;
  cout<<endl;
  if(a>b) g=gcdExtended(b,a,&x,&y);
  else g=gcdExtended(a,b,&x,&y);
  cout<<g<<endl<<x<<endl<<y<<endl;
}
