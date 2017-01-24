#include<iostream>
using namespace std;
int main(){
  cout<<"enter the number :\n";
  int n;
  cin>>n;
  int start=0,end=n-1,mid;
  while (start<=end) {
    mid=(start+end)/2;
    int sq=mid*mid;
    if(sq==n) {
      break;
    }else if(sq>n) end=mid-1;
    else start=mid+1;
  }
  if(mid*mid<=n) cout<<mid<<endl;
  else cout<<mid-1<<endl;

}
