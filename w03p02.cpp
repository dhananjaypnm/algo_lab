#include<iostream>
using namespace std;
int main(){
  cout<<"enter the size of the array :"<<endl;
  int n;
  cin>>n;
  cout<<"\nenter the array :"<<endl;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"\nenter the element to be searched :"<<endl;
  int t;
  cin>>t;
  bool found=false;
  int start=0,end=n-1,mid;
  while (start<=end) {
    mid=(start+end)/2;
    if(a[mid]==t) {
      found=true;
      break;
    }else if(a[mid]<t) start=mid+1;
    else end=mid-1;
  }
  if(found)cout<<endl<<"found"<<endl;
  else cout<<endl<<"not found"<<endl;
}
