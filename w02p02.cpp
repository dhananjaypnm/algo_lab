#include<iostream>
using namespace std;

int gcd(int a,int b){
  if(a==0) return b;
  return gcd(b%a,a);
}

int main(){
  cout<<"enter the size of the array :\n";
  int n;
  cin>>n;
  cout<<"\nenter the array :"<<endl;
  int a[n],tmp;
  cin>>a[0];
  tmp=a[0];
  for(int i=1;i<n;i++){
    cin>>a[i];
    if(a[i]>tmp) tmp=gcd(tmp,a[i]);
    else tmp=gcd(a[i],tmp);
  }
  cout<<endl<<tmp<<endl;

}
